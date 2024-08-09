#ifndef _CIRCLE_
#define _CIRCLE_

#include <iostream>
#include <string>

#include "Shape.hpp"

class Circle: public Shape{
  public:
    Circle(){
      std::cout << "Circle Constructor Called!!" << std::endl;
    }

    void printMyShape() override;
};

#endif