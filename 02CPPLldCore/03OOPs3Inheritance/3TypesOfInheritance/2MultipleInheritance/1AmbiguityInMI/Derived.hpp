#ifndef _DERIVED_
#define _DERIVED_

#include <string>
#include "Base.hpp"
#include "MemberBase.hpp"

class Derived: public Base, public MemberBase{
  private:
    std::string name;

  public:
    Derived(int id, std::string name):Base(id), MemberBase(id), name{name}{
      std::cout << "Derived Constructor Called!!" << std::endl;
    }
    
    void printMyName();
};

#endif