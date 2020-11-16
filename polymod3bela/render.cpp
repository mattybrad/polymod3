#include "Globals.h"
#include <Bela.h>
#include <libraries/Midi/Midi.h>
#include <cmath>
#include "Module.h"
#include "PatchCable.h"

Midi gMidi;
const char* gMidiPort = "hw:0,0,0";

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
	}
	PatchCable::addCable(0,4,0,2,1,0); // midi gate to vca
	PatchCable::addCable(0,3,0,1,0,0); // midi pitch to sine cv
	PatchCable::addCable(1,2,0,2,0,0); // connect sine to vca
	PatchCable::addCable(2,3,0,0,0,0); // connect vca to main out

	return true;
}

int nextPolyChannel = 0;
void render(BelaContext *context, void *userData)
{
	while(gMidi.getParser()->numAvailableMessages()>0) {
		MidiChannelMessage message;
		message = gMidi.getParser()->getNextChannelMessage();
		if(message.getType() == kmmNoteOn) {
			int noteNum = message.getDataByte(0);
			//float midiFreq = powf(2.0, (noteNum - 69)/12.0) * 440.0;
			float tempCV = (noteNum-60)/12.0;
			Module::modules[0].componentSets[1].components[nextPolyChannel].outputs[0] = tempCV;
			Module::modules[0].componentSets[2].components[nextPolyChannel].outputs[0] = 1.0f;
			nextPolyChannel ++;
			if(nextPolyChannel == MAX_POLYPHONY) nextPolyChannel = 0;
			//rt_printf("note on: %i %f\n", noteNum, midiFreq);
		}
	}
	for(unsigned int n = 0; n < context->audioFrames; n++) {
		// update all modules/cables (this is temporary, will eventually be done with a tree)
		PatchCable::updateAll();
		for(int i=0; i<MAX_MODULES; i++) {
			Module::modules[i].update(n);
		}
	}
}

void cleanup(BelaContext *context, void *userData)
{

}
