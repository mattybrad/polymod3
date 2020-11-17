/***** OscillatorComponent.cpp *****/

#include "components/OscillatorComponent.h"
#include "Module.h"
#include <cmath>
#include <libraries/math_neon/math_neon.h>

OscillatorComponent::OscillatorComponent() {

}

void OscillatorComponent::init() {
  _multiplier = 2.0f * (float)M_PI / Module::belaContext->audioSampleRate;
  _twoPi = 2.0f * (float)M_PI;
}

void OscillatorComponent::update(unsigned int n) {
  float noteNum = 12.0 * inputs[0] + 60.0;
  float newFreq = powf_neon(2.0, (noteNum - 69)/12.0) * 440.0; // later only change if input changes, for speed (pretty big saving)

  _phase += _multiplier * newFreq;
  if(_phase > M_PI) _phase -= _twoPi;
  else if(_phase < -M_PI) _phase += _twoPi;
  //outputs[0] = sinf_neon(_phase);
  outputs[0] = _phase > 0 ? 1.0f : -1.0f; // square temporarily to get more harmonics for filter test
}
