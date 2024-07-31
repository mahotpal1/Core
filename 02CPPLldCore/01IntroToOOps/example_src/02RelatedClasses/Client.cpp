/*
Create a class Point. It should have 2 data-members
x : int
y : int

Create a class Rectangle. It should have 3 data-members
topLeft:Point
height:int
width:int
It should have 3 methods
getArea: It should return area of rectangle as an integer
getPerimeter: It should return perimeter of rectangle as an integer
getBottomRight: It should return a Point to represent the bottom right of the Rectangle.

*/

#include <iostream>

#include "Point.h"
#include "Rectangle.h"

using namespace std;

class Client{
  public:
  static int main(){
    Rectangle* rectangle1 = new Rectangle(4, 6);
    Point* p = rectangle1->getBottomRight();
    cout << "Area of rectangle is: " << rectangle1->getArea() << std::endl;
    cout << "Perimeter of rectangle is: " << rectangle1->getPerimeter() << std::endl;

    cout << "Bottom right is x=" << p->getX() << " y=" << p->getY() << std::endl;

    return 0;
  }
};

int main(){
  return Client::main();
}