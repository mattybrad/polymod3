/***** FilterModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"
#include "components/FilterComponent.h"

class FilterModule: public Module {
	public:
	FilterModule();
	void init();
	void update(unsigned int n);

	private:
	ComponentSet _filterSet;
	FilterComponent _filter[MAX_POLYPHONY];
};
