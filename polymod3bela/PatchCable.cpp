/***** PatchCable.cpp *****/

#include "PatchCable.h"
#include "Module.h"

PatchCable::PatchCable() {

}

void PatchCable::update() {
  if(active) {
    for(int i=0; i<MAX_POLYPHONY; i++) {
      float out = Module::modules[sourceModNum].componentSets[sourceSetNum].components[i].outputs[sourceOutputNum];
      Module::modules[destModNum].componentSets[destSetNum].components[i].inputs[destInputNum] = out;
    }
  }
}

void PatchCable::addCable(int newSourceModNum, int newSourceSetNum, int newSourceOutputNum, int newDestModNum, int newDestSetNum, int newDestInputNum) {
  // find next free cable slot (make this more efficient later and check if list is full)
  bool foundSlot = false;
  for(int i=0; i<MAX_PATCH_CABLES && !foundSlot; i++) {
    if(!PatchCable::cables[i].active) {
      foundSlot = true;
      PatchCable::cables[i].active = true;
      PatchCable::cables[i].sourceModNum = newSourceModNum;
      PatchCable::cables[i].sourceSetNum = newSourceSetNum;
      PatchCable::cables[i].sourceOutputNum = newSourceOutputNum;
      PatchCable::cables[i].destModNum = newDestModNum;
      PatchCable::cables[i].destSetNum = newDestSetNum;
      PatchCable::cables[i].destInputNum = newDestInputNum;
    }
  }
}

void PatchCable::removeCable(int newSourceModNum, int newSourceSetNum, int newSourceOutputNum, int newDestModNum, int newDestSetNum, int newDestInputNum) {

}

void PatchCable::updateAll() {
  for(int i=0; i<MAX_PATCH_CABLES; i++) {
    PatchCable::cables[i].update();
  }
}

PatchCable PatchCable::cables[MAX_PATCH_CABLES];
