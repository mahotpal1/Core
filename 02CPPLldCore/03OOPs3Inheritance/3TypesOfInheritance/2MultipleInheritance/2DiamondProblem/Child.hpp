#ifndef _CHILD_
#define _CHILD_

#include <iostream>
#include <string>

#include "GrandParent.hpp"
#include "Father.hpp"
#include "Mother.hpp"


class Child: public Father, public Mother{
  private:
    std::string childName;

  public:
    Child(std::string gpName, std::string fatherName, std::string motherName, std::string childName)
      :GrandParent(gpName), Father(gpName, fatherName), Mother(gpName, motherName), childName{childName}{
        std::cout << "Called Child Constructor!!" << std::endl;
    }

    void printChildName();
};

#endif