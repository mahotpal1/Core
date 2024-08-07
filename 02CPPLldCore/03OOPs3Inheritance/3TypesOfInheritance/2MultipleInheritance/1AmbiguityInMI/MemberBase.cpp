#include <iostream>
#include "MemberBase.hpp"

void MemberBase::printId(){
  std::cout << "MemberId: " << this->id << std::endl;
}