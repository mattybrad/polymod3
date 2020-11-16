#include "Globals.h"
#include <Bela.h>
#include <libraries/Midi/Midi.h>
#include <cmath>
#include "MidiPolyChannel.h"
#include "Module.h"
#include "PatchCable.h"

Midi gMidi;
const char* gMidiPort = "hw:0,0,0";
MidiPolyChannel midiPolyChannels[MAX_POLYPHONY];
unsigned long timeElapsed = 0; // could make into unsigned long long, currently will roll over at ~27 hours? measure in samples

bool setup(BelaContext *context, void *userData)
{
	Module::belaContext = context;

	gMidi.readFrom(gMidiPort);
	gMidi.writeTo(gMidiPort);
	gMidi.enableParser(true);

	for(int i=0; i<MAX_MODULES; i++) {
		if(i==0) Module::modules[i].init(MAIN_MODULE, i);
		else if(i==1) Module::modules[i].init(SINE_MODULE, i);
		else if(i==2) Module::modules[i].init(VCA_MODULE, i);
		else if(i==3) Module::modules[i].init(ADSR_MODULE, i);
		else if(i==4) Module::modules[i].init(FILTER_MODULE, i);
		else if(i==5) Module::modules[i].init(LFO_MODULE, i);
	}
	PatchCable::addCable(0,4,0,3,0,0); // midi gate to ADSR
	PatchCable::addCable(3,2,0,2,1,0); // ADSR to vca
	PatchCable::addCable(0,3,0,1,0,0); // midi pitch to sine cv
	PatchCable::addCable(1,2,0,2,0,0); // connect sine to vca
	PatchCable::addCable(2,3,0,4,0,0); // connect vca to filter
	PatchCable::addCable(4,3,0,0,0,0); // filter to main out
	//PatchCable::addCable(5,2,0,4,1,0); // lfo to filter
	PatchCable::addCable(3,2,0,4,1,0); // ADSR to filter
	//PatchCable::addCable(1,2,0,4,0,0); // sine to filter

	return true;
}

int findMidiPolyChannel() {
	int bestChannel = 0;
	unsigned long bestTime = ULONG_MAX;
	for(int i=0; i<MAX_POLYPHONY; i++) {
		if(midiPolyChannels[i].lastChange < bestTime) {
			bestChannel = i;
			bestTime = midiPolyChannels[i].lastChange;
		}
	}
	return bestChannel;
}

int findMidiPolyChannelWithNote(int noteNum) {
	int bestChannel = 0;
	for(int i=0; i<MAX_POLYPHONY; i++) {
		if(midiPolyChannels[i].noteNum == noteNum && midiPolyChannels[i].isDown) {
			bestChannel = i;
		}
	}
	return bestChannel;
}

/*void resetSet(int moduleNum, int setNum) {
	Module::modules[moduleNum].componentSets[setNum].checkNum = 0;
	Module::modules[moduleNum].componentSets[setNum].poly = false;
	Module::modules[moduleNum].componentSets[setNum].confirmed = false;
	for(int i=0; i<MAX_COMPONENT_INPUTS; i++) {
		//if(Module::modules[moduleNum].componentSets[setNum].inputs[0].confirmed) resetSet()
	}
}

void calculatePolyStatus() {
	int checkNum = 0;
	resetSet(0, 0); // start at main module input set
	while(checkNum<2) {
		checkSet(0, 0);
		checkNum ++;
	}
}

void checkSet(int moduleNum, int setNum) {

}*/

void render(BelaContext *context, void *userData)
{
	while(gMidi.getParser()->numAvailableMessages()>0) {
		MidiChannelMessage message;
		message = gMidi.getParser()->getNextChannelMessage();
		if(message.getType() == kmmNoteOn) {
			int noteNum = message.getDataByte(0);
			int thisChannelNum = findMidiPolyChannel();
			midiPolyChannels[thisChannelNum].noteNum = noteNum;
			midiPolyChannels[thisChannelNum].isDown = true;
			midiPolyChannels[thisChannelNum].lastChange = timeElapsed;
			float tempCV = (noteNum-60)/12.0;
			Module::modules[0].componentSets[1].components[thisChannelNum].outputs[0] = tempCV;
			Module::modules[0].componentSets[2].components[thisChannelNum].outputs[0] = 1.0f;
		}
		if(message.getType() == kmmNoteOff) {
			int noteNum = message.getDataByte(0);
			int thisChannelNum = findMidiPolyChannelWithNote(noteNum);
			midiPolyChannels[thisChannelNum].isDown = false;
			midiPolyChannels[thisChannelNum].lastChange = timeElapsed;
			Module::modules[0].componentSets[2].components[thisChannelNum].outputs[0] = 0.0f;
		}
	}
	for(unsigned int n = 0; n < context->audioFrames; n++) {
		// update all modules/cables (this is temporary, will eventually be done with a tree)
		PatchCable::updateAll();
		for(int i=0; i<MAX_MODULES; i++) {
			Module::modules[i].update(n);
		}
		timeElapsed ++; // maybe a dumb way of doing this?
	}
}

void cleanup(BelaContext *context, void *userData)
{

}
