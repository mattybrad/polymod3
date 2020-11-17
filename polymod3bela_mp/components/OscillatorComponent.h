/***** OscillatorComponent.h *****/

#pragma once

#include <Bela.h>
#include "Component.h"

class OscillatorComponent: public Component {
	public:
		OscillatorComponent();
		void init();
		void update(unsigned int n);

	private:
		float _phase = 0.0;
		float _multiplier;
		float _twoPi;
};
