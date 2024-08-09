#ifndef _RECTANGLE_
#define _RECTANGLE_

#include <iostream>
#include <string>

#include "Shape.hpp"

class Rectangle: public Shape{
  public:
    Rectangle(std::string id):Shape(id){
      std::cout << "Rectangle Constructor Called!!" << std::endl;
    }

    void printMyShape() override;
};

#endif