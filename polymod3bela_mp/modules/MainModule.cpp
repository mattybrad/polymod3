/***** MainModule.cpp *****/

#include "MainModule.h"

MainModule::MainModule() {

}

void MainModule::init() {
  componentSets[0] = &_mainInputSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _mainInputSet.components[i] = &_mainInput[i];
  }
}

void MainModule::update(unsigned int n) {
  float out = 0.0;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    out += 0.01f * _mainInputSet.components[i]->inputs[0];
  }
  for(unsigned int channel = 0; channel < Module::belaContext->audioOutChannels; channel++) {
    audioWrite(Module::belaContext, n, channel, out);
  }
}
