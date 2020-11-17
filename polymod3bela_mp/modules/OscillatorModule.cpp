/***** OscillatorModule.cpp *****/

#include "OscillatorModule.h"

OscillatorModule::OscillatorModule() {

}

void OscillatorModule::init() {
  componentSets[0] = &_oscSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _oscSet.components[i] = &_osc[i];
  }
}

void OscillatorModule::update(unsigned int n) {
  
}
