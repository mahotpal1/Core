#include <iostream>
#include <string>

#include "MyClass.hpp"

int main(){
  // First Object
  MyClass mp1 = MyClass(10, 6);
  // Second Object
  MyClass mp2 = MyClass(4, 2);

  // Print both the object to see the complex number
  mp1.printTheComplex();
  mp2.printTheComplex();

  // Sum of two comples numbers 
  MyClass addResult = mp1+mp2;

  addResult.printTheComplex();

  // difference of Two complex numbers 
  MyClass subResult = mp1-mp2;
  subResult.printTheComplex();

  return 0;
}