#include <iostream>
#include <string>

#include "GrandParent.hpp"
#include "Mother.hpp"
#include "Father.hpp"
#include "Child.hpp"

int main(){
  Child ch1 = Child("Kishore", "Lalit", "Lalita", "LunbKishore");
  ch1.printGrandParentName();
  ch1.printFatherName();
  ch1.printMotherName();
  ch1.printChildName();

  return 0;
}