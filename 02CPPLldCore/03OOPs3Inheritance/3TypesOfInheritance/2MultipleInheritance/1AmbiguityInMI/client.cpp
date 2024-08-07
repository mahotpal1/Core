#include <iostream>
#include "Base.hpp"
#include "MemberBase.hpp"
#include "Derived.hpp"
#include "Base.hpp"

int main(){
  /* Create object of Derived Class and assign it to Base */
  Base bc = Derived(27, "Vishal");

  /* Create object of Derived and call the function from base classes */
  Derived d = Derived(27, "Pallabi");
  d.printMyName();
  //d.printId(); // uncomment and check, It should give error as it is not able to know 
                 // which class function to call.
  d.Base::printId(); // This should work properly, as explicitely we call from Base
  d.MemberBase::printId(); // This should also work properly.

  return 0;
}