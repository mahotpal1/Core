#ifndef _DERIVED_
#define _DERIVED_

#include "Base.hpp"

class Derived: public Base{
  public:
  void displayMember();
  
  void modifyMember(int pub);
};

#endif