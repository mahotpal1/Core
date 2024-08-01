#include <iostream>

#include "MyClass.hpp"

int main(){
  // Create a object of Class MyClass.
  MyClass *m1 = new MyClass(new int(27), "Vishal");
  m1->printMyDetails();

  // Create a new object using older one.
  MyClass *m2 = m1;
  m2->printMyDetails();

  // Delete the original object
  delete(m1);
  // Check the new created object exist or not
  m2->printMyDetails();

  return 0;
}