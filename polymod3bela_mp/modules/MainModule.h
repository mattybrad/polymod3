/***** MainModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"
#include "components/PassThroughComponent.h"
#include "components/DcComponent.h"

class MainModule: public Module {
	public:
	MainModule();
	void init();
	void update(unsigned int n);

	private:
	ComponentSet _mainInputSet;
	ComponentSet _cvOutputSet;
	ComponentSet _gateOutputSet;
	PassThroughComponent _mainInput[MAX_POLYPHONY];
	DcComponent _cvOutput[MAX_POLYPHONY];
	DcComponent _gateOutput[MAX_POLYPHONY];
};
