#include "Arduino.h"
#include "ModuleSine.h"

ModuleSine::ModuleSine() {
  for(byte i=0; i<MAX_POLYPHONY; i++) {
    _sineOscCables[i] = new AudioConnection(_sineOsc[i], 0, _audioOut.amplifiers[i], 0);
  }
}

void ModuleSine::update() {
  
}
