/***** ComponentSet.cpp *****/

#include "ComponentSet.h"

ComponentSet::ComponentSet() {

}

void ComponentSet::init() {

}

void ComponentSet::update(int n) {
  for(int i=0; i<MAX_POLYPHONY; i++) {
    components[i]->update(n);
  }
}
