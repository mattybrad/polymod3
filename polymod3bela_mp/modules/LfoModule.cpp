/***** LfoModule.cpp *****/

#include "LfoModule.h"

LfoModule::LfoModule() {

}

void LfoModule::init() {
  componentSets[0] = &_oscSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _osc[i].init();
    _oscSet.components[i] = &_osc[i];
  }
}

void LfoModule::update(unsigned int n) {

}
