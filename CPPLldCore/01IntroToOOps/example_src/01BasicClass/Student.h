#ifndef _STUDENT_HEADER_
#define _STUDENT_HEADER_

#include <string>

using namespace std;

class Student{
  private:
  string name;
  int age;

  public:
  Student(string name, int age);
  void display();
  void sayHello(string name);
  ~Student();
};

#endif