/***** PatchCable.h *****/

#pragma once

#include <Bela.h>
#include "Globals.h"

class PatchCable {
  public:
  PatchCable();
  void update();
  static PatchCable cables[MAX_PATCH_CABLES];
  static void addCable(int newSourceModNum, int newSourceSetNum, int newSourceOutputNum, int newDestModNum, int newDestSetNum, int newDestInputNum);
  static void removeCable(int newSourceModNum, int newSourceSetNum, int newSourceOutputNum, int newDestModNum, int newDestSetNum, int newDestInputNum);
  static void updateAll();
  bool active;
  int sourceModNum;
  int sourceSetNum;
  int sourceOutputNum;
  int destModNum;
  int destSetNum;
  int destInputNum;

  protected:

  private:

};
