/***** Module.h *****/

#pragma once

#include <Bela.h>
#include "AnalogInput.h"
#include "ComponentSet.h"
#include "PatchCable.h"

class Module {
	public:
	Module();
	static BelaContext *belaContext;
	static Module modules[MAX_MODULES];
	void init(int id, int moduleNum);
	void update(unsigned int n);
	AnalogInput analogInputs[MAX_MODULE_ANALOGS];
	ComponentSet componentSets[MAX_MODULE_COMPONENT_SETS]; // including sockets

	private:
	int _id;
	int _moduleNum;

};
