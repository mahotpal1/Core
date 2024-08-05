#ifndef _MOVE_CONSTRUCTOR_
#define _MOVE_CONSTRUCTOR_

#include <iostream>

class MoveConstructor{
  private:
    int* age;
    char* name;

  public:
    MoveConstructor(int* const age, char* const name):age{age}, name{name}{
      std::cout << "Called Constructor!!" << std::endl;
    } 

    MoveConstructor(MoveConstructor&& obj);

    void printMyDetails();

    ~MoveConstructor(){
      delete age;
      delete name;
      std::cout << "Called Destructor" << std::endl;
    }
};

#endif