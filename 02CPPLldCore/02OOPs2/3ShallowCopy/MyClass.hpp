#ifndef _MY_CLASS_
#define _MY_CLASS_

#include <string>

class MyClass{
  private:
    int* age;
    std::string name;
    
  public:
    MyClass(int* age, std::string name);

    MyClass(MyClass const &obj);

    void printMyDetails();
};

#endif