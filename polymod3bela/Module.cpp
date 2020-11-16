/***** Module.cpp *****/

#include "Module.h"

Module::Module() {

}

void Module::init(int id, int moduleNum) {
	_moduleNum = moduleNum;
	_id = id;
	switch(_id) {
		case MAIN_MODULE: {
			componentSets[0].init(PASS_THROUGH_COMPONENT); // main audio input socket
			componentSets[1].init(DC_COMPONENT); // MIDI-CV signal
			componentSets[2].init(DC_COMPONENT); // MIDI-gate signal
			componentSets[3].init(PASS_THROUGH_COMPONENT); // MIDI-CV output socket
			componentSets[4].init(PASS_THROUGH_COMPONENT); // MIDI-gate output socket
			PatchCable::addCable(_moduleNum, 1, 0, _moduleNum, 3, 0);
			PatchCable::addCable(_moduleNum, 2, 0, _moduleNum, 4, 0);
			break;
		}
		case SINE_MODULE: {
			componentSets[0].init(PASS_THROUGH_COMPONENT); // CV input socket
			componentSets[1].init(SINE_COMPONENT); // oscillator
			componentSets[2].init(PASS_THROUGH_COMPONENT); // audio output socket
			PatchCable::addCable(_moduleNum, 0, 0, _moduleNum, 1, 0);
			PatchCable::addCable(_moduleNum, 1, 0, _moduleNum, 2, 0);
			break;
		}
		case LFO_MODULE: {
			componentSets[0].init(PASS_THROUGH_COMPONENT); // CV input socket
			componentSets[1].init(LFO_COMPONENT); // oscillator
			componentSets[2].init(PASS_THROUGH_COMPONENT); // audio output socket
			PatchCable::addCable(_moduleNum, 0, 0, _moduleNum, 1, 0);
			PatchCable::addCable(_moduleNum, 1, 0, _moduleNum, 2, 0);
			break;
		}
		case RPS_MODULE: {
			componentSets[0].init(RPS_COMPONENT); // random polyphonic source
			componentSets[1].init(PASS_THROUGH_COMPONENT); // audio output socket
			PatchCable::addCable(_moduleNum, 0, 0, _moduleNum, 1, 0);
			break;
		}
		case VCA_MODULE: {
			componentSets[0].init(PASS_THROUGH_COMPONENT); // audio in
			componentSets[1].init(PASS_THROUGH_COMPONENT); // CV in
			componentSets[2].init(VCA_COMPONENT); // amplifier
			componentSets[3].init(PASS_THROUGH_COMPONENT); // audio output
			PatchCable::addCable(_moduleNum, 0, 0, _moduleNum, 2, 0);
			PatchCable::addCable(_moduleNum, 1, 0, _moduleNum, 2, 1);
			PatchCable::addCable(_moduleNum, 2, 0, _moduleNum, 3, 0);
			break;
		}
	}
}

void Module::update(unsigned int n) {
	for(int i=0; i<MAX_MODULE_COMPONENT_SETS; i++) {
		componentSets[i].update(n);
	}
	if(_id == MAIN_MODULE) {
		float out = 0.0;
		for(int i=0; i<MAX_POLYPHONY; i++) {
			out += 0.01f * componentSets[0].components[i].inputs[0];
		}
		for(unsigned int channel = 0; channel < Module::belaContext->audioOutChannels; channel++) {
			audioWrite(Module::belaContext, n, channel, out);
		}
	}
}

BelaContext *Module::belaContext;
Module Module::modules[MAX_MODULES];
