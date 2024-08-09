#include <iostream>
#include <string>

#include "MyClass.hpp"

MyClass MyClass::operator+(const MyClass& src){
  return MyClass(x+src.x, y+src.y);
}

MyClass MyClass::operator-(const MyClass& src){
  return MyClass(x-src.x, y-src.y);
}

void MyClass::printTheComplex(){
  std::cout << "Number: " << x << " + " << y << "i" << std::endl;
}