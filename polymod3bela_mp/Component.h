/***** Component.h *****/

#pragma once

#include <Bela.h>
#include "Globals.h"

class Component {
	public:
	Component();
	virtual void init();
	virtual void update(unsigned int n);
	float inputs[MAX_COMPONENT_INPUTS];
	float outputs[MAX_COMPONENT_OUTPUTS];

	private:
};
