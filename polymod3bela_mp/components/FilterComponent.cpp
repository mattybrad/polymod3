/***** FilterComponent.cpp *****/

#include "components/FilterComponent.h"
#include "Module.h"
#include <libraries/math_neon/math_neon.h>

FilterComponent::FilterComponent() {

}

void FilterComponent::init() {
  Biquad::Settings settings{
			.fs = Module::belaContext->audioSampleRate,
			.cutoff = 1000.0f,
			.type = Biquad::lowpass,
			.q = 2.0f,
			.peakGainDb = 0,
			};
	_filter.setup(settings);
}

void FilterComponent::update(unsigned int n) {
  if(n==0) {
    float noteNum = 12.0 * inputs[1] + 60.0;
    float newFreq = powf_neon(2.0, (noteNum - 69)/12.0) * 440.0;
    _filter.setFc(newFreq); // temporary CV-cutoff mapping
  }
  outputs[0] = _filter.process(inputs[0]);
}
