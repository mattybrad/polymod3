/***** OscillatorComponent.cpp *****/

#include "components/OscillatorComponent.h"
#include "Module.h"
#include <cmath>
#include <libraries/math_neon/math_neon.h>

OscillatorComponent::OscillatorComponent() {

}

void OscillatorComponent::init() {

}

void OscillatorComponent::update(unsigned int n) {
  float inverseSampleRate = 1.0 / Module::belaContext->audioSampleRate; // move later for speed
  float noteNum = 12.0 * inputs[0] + 60.0;
  float newFreq = powf_neon(2.0, (noteNum - 69)/12.0) * 440.0; // later only change if input changes, for speed

  _phase += 2.0f * (float)M_PI * inverseSampleRate * newFreq;
  if(_phase > M_PI) _phase -= 2.0f * (float)M_PI;
  else if(_phase < -M_PI) _phase += 2.0f * (float)M_PI;
  //outputs[0] = sinf_neon(_phase);
  outputs[0] = _phase > 0 ? 1.0f : -1.0f; // square temporarily to get more harmonics for filter test
}
