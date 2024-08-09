#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

int main(){
  Circle* sp2 = new Circle();
  Rectangle* sp3 = new Rectangle();

  sp2->printMyShape();
  sp3->printMyShape();

  return 0;
}