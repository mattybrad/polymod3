#include "Arduino.h"
#include "ModuleSine.h"

ModuleSine::ModuleSine() {
  for(byte i=0; i<MAX_POLYPHONY; i++) {
    _sineOsc[i].amplitude(0.2);
    _sineOsc[i].frequency(110.0*pow(2,i));
    _sineOscCables[i] = new AudioConnection(_sineOsc[i], 0, audioOut.amplifiers[i], 0);
  }
}

void ModuleSine::update() {
  
}
