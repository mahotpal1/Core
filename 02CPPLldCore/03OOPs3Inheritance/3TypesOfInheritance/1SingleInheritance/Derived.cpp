#include <iostream>
#include <string>
#include "Derived.hpp"

void Derived::printMyName(){
  std::cout << "My name is: " << this->name << std::endl;
}