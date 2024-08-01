#include <iostream>
#include <cstring>

#include "MyClass.hpp"

MyClass::MyClass(int* const age, char* const name):age(age), name(name){
  std::cout << "Called Parameter Constructor!!" << std::endl;
}

MyClass::MyClass(MyClass const &obj){
  this->age = new int(*(obj.age));
  this->name = new char[100];
  std::strcpy(this->name, obj.name);
}

void MyClass::printMyDetails(){
  std::cout << "My name is " << name << " and my age is " << *age << std::endl;
}