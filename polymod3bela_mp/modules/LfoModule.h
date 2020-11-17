/***** LfoModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"
#include "components/LfoComponent.h"

class LfoModule: public Module {
	public:
	LfoModule();
	void init();
	void update(unsigned int n);

	private:
	ComponentSet _oscSet;
	LfoComponent _osc[MAX_POLYPHONY];
};
