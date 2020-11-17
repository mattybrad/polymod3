/***** PatchCable.h *****/

#pragma once

#include <Bela.h>
#include "Globals.h"
#include "ComponentSet.h"

class PatchCable {
  public:
  PatchCable();
  void update(unsigned int n);
  ComponentSet *sourceSet;
  int sourceOutNum;
  ComponentSet *destSet;
  int destInNum;

  protected:

  private:

};
