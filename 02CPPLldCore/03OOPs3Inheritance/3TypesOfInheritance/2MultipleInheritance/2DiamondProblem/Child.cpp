#include "Child.hpp"
#include <iostream>

void Child::printChildName(){
  std::cout << "Child Name: " << this->childName << std::endl;
}