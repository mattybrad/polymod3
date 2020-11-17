/***** Module.h *****/

#pragma once

#include <Bela.h>
#include "ComponentSet.h"
#include "PatchCable.h"

class Module {
	public:
	Module();
	static BelaContext *belaContext;
	virtual void init();
	virtual void update(unsigned int n);
	ComponentSet *componentSets[MAX_MODULE_COMPONENT_SETS];
	// Analog inputs might go here? Or are they just component sets?

	private:
};
