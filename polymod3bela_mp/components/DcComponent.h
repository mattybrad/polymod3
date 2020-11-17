/***** DcComponent.h *****/

#pragma once

#include <Bela.h>
#include "Component.h"

class DcComponent: public Component {
	public:
	DcComponent();
	void init();
	void update(unsigned int n);

	private:
};
