/***** OscillatorModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"
#include "components/OscillatorComponent.h"

class OscillatorModule: public Module {
	public:
	OscillatorModule();
	void init();
	void update(unsigned int n);

	private:
	ComponentSet _oscSet;
	OscillatorComponent _osc[MAX_POLYPHONY];
};
