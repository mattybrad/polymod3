/***** EnvelopeModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"
#include "components/EnvelopeComponent.h"

class EnvelopeModule: public Module {
	public:
	EnvelopeModule();
	void init();
	void update(unsigned int n);

	private:
	ComponentSet _envSet;
	EnvelopeComponent _env[MAX_POLYPHONY];
};
