/***** EnvelopeComponent.h *****/

#pragma once

#include <Bela.h>
#include "Component.h"
#include <libraries/ADSR/ADSR.h>

class EnvelopeComponent: public Component {
	public:
	EnvelopeComponent();
	void init();
	void update(unsigned int n);

	private:
	ADSR _env;
};
