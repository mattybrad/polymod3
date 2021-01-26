#ifndef ModuleVCO_h
#define ModuleVCO_h
#include "Arduino.h"
#include "Module.h"
#include "AnalogControl.h"

class ModuleVCO : public Module {
  public:
    ModuleVCO();
    virtual void update();
    SocketOutput audioOut;
    SocketInput freqModIn;
  private:
    AnalogControl _freqControl;
    AudioSynthWaveformModulated _osc[MAX_POLYPHONY];
    AudioConnection* _oscCables[MAX_POLYPHONY];
    AudioConnection* _modCables[MAX_POLYPHONY];
    
};

#endif