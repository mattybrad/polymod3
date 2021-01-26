#ifndef SocketConnection_h
#define SocketConnection_h
#include "Arduino.h"
#include "Globals.h"
#include "SocketInput.h"
#include "SocketOutput.h"
#include <Audio.h>
 
class SocketConnection {
  public:
    SocketConnection();
    void connect(SocketOutput& src, SocketInput& dest);
  private:
    AudioConnection* _patchCables[MAX_POLYPHONY];
    
};

#endif
