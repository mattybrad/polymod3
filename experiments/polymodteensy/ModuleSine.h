#ifndef ModuleSine_h
#define ModuleSine_h
#include "Arduino.h"
#include "Module.h"

class ModuleSine : public Module {
  public:
    ModuleSine();
    virtual void update();
  private:
    AudioSynthWaveformSine _sineOsc[MAX_POLYPHONY];
    SocketOutput _audioOut;
    AudioConnection* _sineOscCables[MAX_POLYPHONY];
    
};

#endif
