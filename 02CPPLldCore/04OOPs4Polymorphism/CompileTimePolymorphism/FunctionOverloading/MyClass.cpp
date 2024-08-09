#include <iostream>
#include <string>

#include "MyClass.hpp"

void MyClass::printMe(std::string myName){
  std::cout << "My name is: " << myName << std::endl;
}

void MyClass::printMe(int age){
  std::cout << "My age is: " << age << std::endl;
}