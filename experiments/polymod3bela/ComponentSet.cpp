/***** ComponentSet.cpp *****/

#include "ComponentSet.h"

ComponentSet::ComponentSet() {

}

void ComponentSet::init(int id) {
	rt_printf("init component set, id=%d\n", id);
	_active = true;
	for(int i=0; i<MAX_POLYPHONY; i++) {
		components[i].tempNum = i;
		components[i].init(id);
	}
}

void ComponentSet::update(int n) {
	if(_active) {
		//rt_printf("UPDATE SET\n");
		for(int i=0; i<MAX_POLYPHONY; i++) {
			components[i].update(n);
		}
	}
}
