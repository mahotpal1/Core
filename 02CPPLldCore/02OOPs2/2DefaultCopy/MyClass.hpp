#ifndef _MY_CLASS_
#define _MY_CLASS_

#include <string>

class MyClass{
  private:
    std::string name;
    int age;

  public:
    /* Constructor */
    MyClass(std::string my_name, int my_age);

    /* Void Method */
    void printMyDetails();
};

#endif