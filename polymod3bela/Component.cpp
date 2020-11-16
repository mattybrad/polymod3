/***** Component.cpp *****/

#include "Component.h"
#include "Module.h"
#include <cmath>
#include <libraries/math_neon/math_neon.h>

Component::Component() {

}

void Component::init(int id) {
  _id = id;
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
      outputs[0] = sinf_neon(_phase);
      break;
    }
    case LFO_COMPONENT: {
      float inverseSampleRate = 1.0 / Module::belaContext->audioSampleRate;
      _phase += 2.0f * (float)M_PI * inverseSampleRate * _frequency  * (inputs[0] + 1.0f) * 0.01; // todo: add cv input like sine component
      if(_phase > M_PI)
      _phase -= 2.0f * (float)M_PI;
      else if(_phase < -M_PI)
      _phase += 2.0f * (float)M_PI;
      //outputs[0] = sinf(_phase);
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
  }
}
