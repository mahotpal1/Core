#ifndef _MYCLASS_
#define _MYCLASS_

#include <iostream>

class MyClass{
  private:
    int x;
    int y;

  public:
    MyClass(int x, int y):x{x}, y{y}{
      std::cout << "MyClass Constructor Called!!" << std::endl;
    }

    MyClass operator+(const MyClass& src);

    MyClass operator-(const MyClass& src);

    void printTheComplex();
};

#endif