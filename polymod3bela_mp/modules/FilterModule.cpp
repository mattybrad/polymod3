/***** FilterModule.cpp *****/

#include "FilterModule.h"

FilterModule::FilterModule() {

}

void FilterModule::init() {
  componentSets[0] = &_filterSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _filter[i].init();
    _filterSet.components[i] = &_filter[i];
  }
}

void FilterModule::update(unsigned int n) {

}
