#ifndef _SHAPE_
#define _SHAPE_

#include <string>
#include <iostream>

class Shape{
  private:
    std::string memberId;

  protected:
    // Make all as protected to create abstraction
    Shape(std::string memberId):memberId{memberId}{
      std::cout << "Shape constructor called!!" << std::endl;
    }

    virtual void printMyShape() = 0;
};

#endif