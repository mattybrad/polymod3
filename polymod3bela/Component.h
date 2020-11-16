/***** Component.h *****/

#pragma once

#include <Bela.h>
#include "Globals.h"

class Component {
	public:
	Component();
	void init(int d);
	void update(int n);
	float inputs[MAX_COMPONENT_INPUTS];
	float outputs[MAX_COMPONENT_OUTPUTS];
	int tempNum = 0;

	private:
	int _id;
	float _phase = 0.0;
	float _frequency = 261.6256; // middle C
};
