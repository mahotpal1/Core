#include <iostream>
#include <string>
#include "Base.hpp"
#include "Derived.hpp"

int main(){
  Base* b = new Base(21);
  // Creating object of derived class and assigning it to Base.
  // Due to object Slicing 
  // Base* b1 = new Derived("Vishal", 24);
  b->printMyAge();
  Derived* d1 = new Derived("Vishal", 24);
  d1->printMyAge();
  d1->printMyName();
  b = std::move(d1);
  b->printMyAge();
  // b1->printMyAge();
  // Due to object Slicing 
  // b1->printMyName();
  return 0;
}