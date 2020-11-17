/***** PassThroughComponent.h *****/

#pragma once

#include <Bela.h>
#include "Component.h"

class PassThroughComponent: public Component {
	public:
	PassThroughComponent();
	void init();
	void update(unsigned int n);

	private:
};
