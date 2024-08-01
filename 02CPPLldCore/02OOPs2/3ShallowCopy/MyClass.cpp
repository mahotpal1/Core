#include <iostream>
#include <string>

#include "MyClass.hpp"

MyClass::MyClass(int* const age, std::string const name):age(age), name(name){
  std::cout << "Called Parameter Constructor!!" << std::endl;
}

MyClass::MyClass(MyClass const &obj){
  this->age = obj.age;
  name = obj.name;
}

void MyClass::printMyDetails(){
  std::cout << "My name is " << name << " and my age is " << *age << std::endl;
}