/***** ComponentSet.h *****/

#pragma once

#include <Bela.h>
#include "Globals.h"
#include "Component.h"

class ComponentSet {
	public:
	ComponentSet();
	void init();
	void update(int n);
	Component *components[MAX_POLYPHONY];

	private:
};
