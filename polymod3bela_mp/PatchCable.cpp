/***** PatchCable.cpp *****/

#include "PatchCable.h"
#include "Module.h"

PatchCable::PatchCable() {

}

void PatchCable::update(unsigned int n) {
  sourceSet->update(n);
  for(int i=0; i<MAX_POLYPHONY; i++) {
    destSet->components[i]->inputs[destInNum] = sourceSet->components[i]->outputs[sourceOutNum];
  }
  destSet->update(n);
}
