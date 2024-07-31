#ifndef _RECTANGLE_
#define _RECTANGLE_

#include "Point.h"

class Rectangle{
  private:
    int height;
    int width;
    Point topLeft;

  public:

    Rectangle(int width, int height);

    float getArea();

    float getPerimeter();

    Point* getBottomRight();
};

#endif