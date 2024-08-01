#ifndef _MY_CLASS_
#define _MY_CLASS_

#include <string>

class MyClass{
  private:
    int* age;
    char* name;
    
  public:
    MyClass(int* age, char* name);

    MyClass(MyClass const &obj);

    void printMyDetails();
};

#endif