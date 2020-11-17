/***** AmplifierComponent.h *****/

#pragma once

#include <Bela.h>
#include "Component.h"

class AmplifierComponent: public Component {
	public:
	AmplifierComponent();
	void init();
	void update(unsigned int n);

	private:
};
