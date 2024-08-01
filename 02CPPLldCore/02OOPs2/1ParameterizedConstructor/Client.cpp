#include <iostream>

#include "MyClass.hpp"

using namespace std;

int main(){
  // Class Object instance
  MyClass m1("Harsh");
  // Class object Pointer
  MyClass *m2 = new MyClass("Pallabi", "Maity", 27);
  m1.printMyDetails();
  m2->printMyDetails(); 
  MyClass *m3 = new MyClass("Pallabi", "Maity", 27, "Software Engineer");
  m3->printMyDetails();
  delete m2;
  delete m3;
  return 0;
}