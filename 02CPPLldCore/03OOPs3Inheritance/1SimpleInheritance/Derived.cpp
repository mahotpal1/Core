#include <iostream>

#include "Derived.hpp"

void Derived::displayMember(){
  display();
}
  
void Derived::modifyMember(int pub){
  publicVar = pub;
}