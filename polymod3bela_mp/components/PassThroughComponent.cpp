/***** PassThroughComponent.cpp *****/

#include "components/PassThroughComponent.h"
#include "Module.h"

PassThroughComponent::PassThroughComponent() {

}

void PassThroughComponent::init() {

}

void PassThroughComponent::update(unsigned int n) {
  outputs[0] = inputs[0];
}
