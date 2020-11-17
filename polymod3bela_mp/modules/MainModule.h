/***** MainModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"
#include "components/PassThroughComponent.h"

class MainModule: public Module {
	public:
	MainModule();
	void init();
	void update(unsigned int n);

	private:
	ComponentSet _mainInputSet;
	PassThroughComponent _mainInput[MAX_POLYPHONY];
};
