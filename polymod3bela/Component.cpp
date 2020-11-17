/***** Component.cpp *****/

#include "Component.h"
#include "Module.h"
#include <cmath>
#include <libraries/math_neon/math_neon.h>

Component::Component() {
}

void Component::init(int id) {
  _id = id;

  _envelope.setAttackRate(0.01f * Module::belaContext->audioSampleRate);
	_envelope.setDecayRate(0.1f * Module::belaContext->audioSampleRate);
	_envelope.setReleaseRate(1.0f * Module::belaContext->audioSampleRate);
	_envelope.setSustainLevel(0.2f);

  Biquad::Settings settings{
			.fs = Module::belaContext->audioSampleRate,
			.cutoff = 1000.0f,
			.type = Biquad::lowpass,
			.q = 2.0f,
			.peakGainDb = 0,
			};
	_filter.setup(settings);
}

void Component::update(int n) {
  switch(_id) {
    case SINE_COMPONENT: {
      float inverseSampleRate = 1.0 / Module::belaContext->audioSampleRate;

      float noteNum = 12.0 * inputs[0] + 60.0;
      float newFreq = powf_neon(2.0, (noteNum - 69)/12.0) * 440.0;

      _phase += 2.0f * (float)M_PI * inverseSampleRate * newFreq;
      if(_phase > M_PI)
      _phase -= 2.0f * (float)M_PI;
      else if(_phase < -M_PI)
      _phase += 2.0f * (float)M_PI;
      //outputs[0] = sinf_neon(_phase);
      outputs[0] = _phase > 0 ? 1.0f : -1.0f; // square temporarily to get more harmonics for filter test
      break;
    }
    case LFO_COMPONENT: {
      float inverseSampleRate = 1.0 / Module::belaContext->audioSampleRate;

      float noteNum = 12.0 * inputs[0] + 60.0;
      float newFreq = powf_neon(2.0, (noteNum - 69)/12.0) * 0.43;

      _phase += 2.0f * (float)M_PI * inverseSampleRate * newFreq;
      if(_phase > M_PI)
      _phase -= 2.0f * (float)M_PI;
      else if(_phase < -M_PI)
      _phase += 2.0f * (float)M_PI;
      outputs[0] = sinf_neon(_phase);
      break;
    }
    case PASS_THROUGH_COMPONENT: {
      outputs[0] = inputs[0];
      break;
    }
    case RPS_COMPONENT: {
      outputs[0] = -1.0f + 2.0f*tempNum/(MAX_POLYPHONY-1);
      break;
    }
    case VCA_COMPONENT: {
      outputs[0] = inputs[0] * inputs[1];
      break;
    }
    case ADSR_COMPONENT: {
      _envelope.gate(inputs[0]>0.1);
      outputs[0] = _envelope.process();
      break;
    }
    case FILTER_COMPONENT: {
      if(n==0) {
        float noteNum = 12.0 * inputs[1] + 60.0;
        float newFreq = powf_neon(2.0, (noteNum - 69)/12.0) * 440.0;
        _filter.setFc(newFreq); // temporary CV-cutoff mapping
      }
      outputs[0] = _filter.process(inputs[0]);
      break;
    }
  }
}
