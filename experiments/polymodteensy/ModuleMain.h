#ifndef ModuleMain_h
#define ModuleMain_h
#include "Arduino.h"
#include "Module.h"

class ModuleMain : public Module {
  public:
    ModuleMain();
    virtual void update();
  private:
    AudioOutputI2S _i2s;
    AudioMixer4 _mixer;
    SocketInput _audioIn;
    AudioConnection* _mixerCables[MAX_POLYPHONY];
    AudioConnection* _outputCables[2];
    
};

#endif
