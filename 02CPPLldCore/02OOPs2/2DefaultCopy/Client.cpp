#include <string>
#include <iostream>

#include "MyClass.hpp"

int main(){
  MyClass m1("Vishal", 27);
  m1.printMyDetails();
  MyClass m2(m1);  
  m2.printMyDetails();

  return 0;
}