#ifndef _SHAPE_
#define _SHAPE_

#include <string>
#include <iostream>

class Shape{
  private:
    std::string memberId;

  public:
    Shape(std::string memberId):memberId{memberId}{
      std::cout << "Shape constructor called!!" << std::endl;
    }

    virtual void printMyShape();
};

#endif