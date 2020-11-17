/***** AmplifierModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"
#include "components/AmplifierComponent.h"

class AmplifierModule: public Module {
	public:
	AmplifierModule();
	void init();
	void update(unsigned int n);

	private:
	ComponentSet _ampSet;
	AmplifierComponent _amp[MAX_POLYPHONY];
};
