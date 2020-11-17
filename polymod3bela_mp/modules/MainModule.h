/***** MainModule.h *****/

#pragma once

#include <Bela.h>
#include "Module.h"

class MainModule: public Module {
	public:
	MainModule();
	void init();
	void update(unsigned int n);

	private:
};
