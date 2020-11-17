/***** MainModule.cpp *****/

#include "MainModule.h"

MainModule::MainModule() {

}

void MainModule::init() {
  componentSets[0] = &_mainInputSet;
  componentSets[1] = &_cvOutputSet;
  componentSets[2] = &_gateOutputSet;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    _mainInputSet.components[i] = &_mainInput[i];
    _cvOutputSet.components[i] = &_cvOutput[i];
    _gateOutputSet.components[i] = &_gateOutput[i];
  }
}

void MainModule::update(unsigned int n) {
  float out = 0.0;
  for(int i=0; i<MAX_POLYPHONY; i++) {
    out += _mainInputSet.components[i]->inputs[0];
  }
  out = 0.01f * out;
  for(unsigned int channel = 0; channel < Module::belaContext->audioOutChannels; channel++) {
    audioWrite(Module::belaContext, n, channel, out);
  }
}
