#include <iostream>
#include <string>
/*
  Ways to build the executable: 
    1. First build the c++ to object files.
    2. Then link the object files to generate executable.

    g++ -c client.cpp
    g++ -c Student.cpp
    g++ -o myProgram client.o student.o
    
*/
#include "Student.h"

class Client{
  public: 
  static int main(){
    Student* st_object1 = new Student("Vishal", 26);
    st_object1->display();
    st_object1->sayHello("Pallabi");
    return 0;
  }
};

int main(){
  return Client::main();
}