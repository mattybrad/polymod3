/***** OscillatorModule.cpp *****/

#include "OscillatorModule.h"

OscillatorModule::OscillatorModule() {

}

void OscillatorModule::init() {
  componentSets[0] = &_oscSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _osc[i].init();
    _oscSet.components[i] = &_osc[i];
  }
}

void OscillatorModule::update(unsigned int n) {

}
