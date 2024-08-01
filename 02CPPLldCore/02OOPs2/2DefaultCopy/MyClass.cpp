#include <iostream>
#include <string>
#include "MyClass.hpp"

MyClass::MyClass(std::string name, int age):name(name), age(age){
  std::cout << "Called Constructor" << std::endl;
}

void MyClass::printMyDetails(){
  std::cout << "My name is " << this->name << " and my age is " << this->age << std::endl;
}