#include <iostream>
#include <string>

#include "MyClass.hpp"

int main(){
  MyClass m = MyClass("Vishalm12");
  m.printMe("Vishal");
  m.printMe(27);

  return 0;
}