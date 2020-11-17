/***** EnvelopeComponent.cpp *****/

#include "components/EnvelopeComponent.h"
#include "Module.h"

EnvelopeComponent::EnvelopeComponent() {

}

void EnvelopeComponent::init() {
  _env.setAttackRate(0.01f * Module::belaContext->audioSampleRate);
	_env.setDecayRate(0.1f * Module::belaContext->audioSampleRate);
	_env.setReleaseRate(1.0f * Module::belaContext->audioSampleRate);
	_env.setSustainLevel(0.2f);
}

void EnvelopeComponent::update(unsigned int n) {
  _env.gate(inputs[0]>0.1);
  outputs[0] = _env.process();
}
