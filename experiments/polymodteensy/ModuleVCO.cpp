#include "Arduino.h"
#include "ModuleVCO.h"

ModuleVCO::ModuleVCO() {
  for(byte i=0; i<MAX_POLYPHONY; i++) {
    _osc[i].begin(0.2, 22.5*pow(2,i/2.0), WAVEFORM_SAWTOOTH);
    _modCables1[i] = new AudioConnection(freqModIn.amplifiers[i], 0, _modMixer[i], 0);
    _modCables2[i] = new AudioConnection(_freqControl.dc, 0, _modMixer[i], 1);
    _modCables3[i] = new AudioConnection(_modMixer[i], 0, _osc[i], 0);
    _oscCables[i] = new AudioConnection(_osc[i], 0, audioOut.amplifiers[i], 0);
  }
}

void ModuleVCO::update() {
  _freqControl.update();
}
