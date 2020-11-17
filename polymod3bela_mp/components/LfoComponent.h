/***** LfoComponent.h *****/

#pragma once

#include <Bela.h>
#include "Component.h"

class LfoComponent: public Component {
	public:
	LfoComponent();
	void init();
	void update(unsigned int n);

	private:
	float _phase = 0.0;
	float _multiplier;
	float _twoPi;
};
