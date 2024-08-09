#ifndef _CLASS_
#define _CLASS_

#include <iostream>
#include <string>

class MyClass{
  private: 
    std::string myClassId;

  public:
    MyClass(std::string myClassId): myClassId{myClassId}{
      std::cout << "MyClass Constructor Called!!!" << std::endl;
    }
    // Function name with string parameter
    void printMe(std::string myName);
    // Same Function name with integer parameter
    void printMe(int age);
};

#endif