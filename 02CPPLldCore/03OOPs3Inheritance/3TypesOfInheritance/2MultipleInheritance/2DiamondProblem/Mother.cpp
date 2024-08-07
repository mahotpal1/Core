#include <iostream>
#include <string>

#include "GrandParent.hpp"
#include "Mother.hpp"

void Mother::printMotherName(){
  std::cout << "Mother's name: " << this->motherName << std::endl;
}