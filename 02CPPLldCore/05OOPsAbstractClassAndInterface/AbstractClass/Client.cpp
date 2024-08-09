#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

int main(){
  Circle* sp2 = new Circle("ChakDeIndia");
  Rectangle* sp3 = new Rectangle("RoundGhumaDe");

  sp2->printMyShape();
  sp3->printMyShape();

  return 0;
}