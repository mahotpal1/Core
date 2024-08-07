#ifndef _BASE_
#define _BASE_

#include <iostream>

class Base{
  private:
    int age;

  public:
    Base(int age):age{age}{
      std::cout << "Called Base Constructor!!" << std::endl; 
    }

    void printMyAge();
};

#endif