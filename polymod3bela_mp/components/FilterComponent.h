/***** FilterComponent.h *****/

#pragma once

#include <Bela.h>
#include "Component.h"
#include <libraries/Biquad/Biquad.h>

class FilterComponent: public Component {
	public:
	FilterComponent();
	void init();
	void update(unsigned int n);

	private:
	Biquad _filter;
};
