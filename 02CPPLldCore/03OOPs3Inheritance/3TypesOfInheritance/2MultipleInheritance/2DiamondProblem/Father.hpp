#ifndef _FATHER_
#define _FATHER_

#include <string>
#include <iostream>

#include "GrandParent.hpp"

class Father: virtual public GrandParent{
  private:
    std::string fatherName;

  public:
    Father(std::string gpName, std::string fatherName):GrandParent(gpName), fatherName{fatherName}{
      std::cout << "Called Father's Constructor!!!" << std::endl;
    }

    void printFatherName();
};

#endif