#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass(){
  std::cout << "Called Default Constructor" << std::endl;
}

MyClass::MyClass(std::string firstName, std::string lastName, int age)
:firstName(firstName), lastName(lastName), age(age){
  std::cout << "Called parameterized Constructor" << std::endl;
}

MyClass::MyClass(std::string firstName, std::string lastName, int age, std::string designation):
MyClass(firstName, lastName, age){
  this->designation = designation;
  std::cout << "Called Delegating Constructor" << std::endl;
}

void MyClass::printMyDetails(){
  std::cout << "My name is " << this->firstName << " " << this->lastName << " and age is " << this->age << std::endl;
  if(!this->designation.empty()){
    std::cout << "I am working as a " << this->designation << std::endl;
  }
}