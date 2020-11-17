/***** AmplifierModule.cpp *****/

#include "AmplifierModule.h"

AmplifierModule::AmplifierModule() {

}

void AmplifierModule::init() {
  componentSets[0] = &_ampSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _amp[i].init();
    _ampSet.components[i] = &_amp[i];
  }
}

void AmplifierModule::update(unsigned int n) {

}
