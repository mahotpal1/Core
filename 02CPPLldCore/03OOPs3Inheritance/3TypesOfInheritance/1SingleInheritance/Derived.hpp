#ifndef _DERIVED_
#define _DERIVED_

#include <string>
#include "Base.hpp"

class Derived: public Base{
  private:
    std::string name;

  public:
    Derived(std::string name, int age):name{name}, Base(age){
      std::cout << "Called Derived Constructor!!" << std::endl;
    }

    void printMyName();
};

#endif