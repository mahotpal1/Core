#include <iostream>
#include  "Base.hpp"
#include "Derived.hpp"

int main(){
  Derived obj;
  obj.modifyMember(10);
  obj.display();
  obj.modifyMember(5);
  obj.display();
}