#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

int main(){
  Shape* sp1 = new Shape("Kuch ni ho payega!!");
  Shape* sp2 = new Circle("ChakDeIndia");
  Shape* sp3 = new Rectangle("RoundGhumaDe");

  sp1->printMyShape();
  sp2->printMyShape();
  sp3->printMyShape();

  return 0;
}