#include <iostream>
#include <string>

#include "GrandParent.hpp"
#include "Father.hpp"

void Father::printFatherName(){
  std::cout << "Father's name: " << this->fatherName << std::endl;
}