/***** AmplifierComponent.cpp *****/

#include "components/AmplifierComponent.h"
#include "Module.h"

AmplifierComponent::AmplifierComponent() {

}

void AmplifierComponent::init() {

}

void AmplifierComponent::update(unsigned int n) {
  outputs[0] = inputs[0] * inputs[1];
}
