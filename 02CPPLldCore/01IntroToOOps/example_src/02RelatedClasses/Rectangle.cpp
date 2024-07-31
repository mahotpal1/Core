#include "Point.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int width, int height){
  this->width = width;
  this->height = height;
}

float Rectangle::getArea(){
  return this->height*this->width;
}

float Rectangle::getPerimeter(){
  return 2*(this->height+this->width);
}

Point* Rectangle::getBottomRight(){
  int x = this->width+topLeft.getX();
  int y = topLeft.getY()-this->height;
  return new Point(x, y);
}
