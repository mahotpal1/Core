#include <iostream>
#include <string>

#include "GrandParent.hpp"

void GrandParent::printGrandParentName(){
  std::cout << "GrandParent: " << this->gpName << std::endl;
}