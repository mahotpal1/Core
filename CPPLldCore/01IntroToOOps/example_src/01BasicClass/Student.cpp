#include <iostream>
#include "Student.h"

#include <string>
using namespace std;

Student::Student(string name, int age){
  this->name = name;
  this->age = age;
}

void Student::display(){
  std::cout << "My name is " << this->name << ". I am " << this->age << "years old." << std::endl;
}

void Student::sayHello(string name){
  std::cout << this->name << " says hello to " << name << std::endl;
}

Student::~Student(){

}