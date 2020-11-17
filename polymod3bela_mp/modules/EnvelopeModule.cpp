/***** EnvelopeModule.cpp *****/

#include "EnvelopeModule.h"

EnvelopeModule::EnvelopeModule() {

}

void EnvelopeModule::init() {
  componentSets[0] = &_envSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _env[i].init();
    _envSet.components[i] = &_env[i];
  }
}

void EnvelopeModule::update(unsigned int n) {

}
