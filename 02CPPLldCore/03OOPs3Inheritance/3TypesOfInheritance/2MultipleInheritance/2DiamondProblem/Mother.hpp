#ifndef _MOTHER_
#define _MOTHER_

#include <string>
#include <iostream>

#include "GrandParent.hpp"

class Mother: virtual public GrandParent{
  private:
    std::string motherName;

  public:
    Mother(std::string gpName, std::string motherName):GrandParent(gpName), motherName{motherName}{
      std::cout << "Called Mother's Constructor!!!" << std::endl;
    }

    void printMotherName();
};

#endif