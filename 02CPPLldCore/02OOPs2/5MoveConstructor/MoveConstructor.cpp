#include "MoveConstructor.hpp"
#include <iostream>
#include <stdexcept>

MoveConstructor::MoveConstructor(MoveConstructor&& obj):age{obj.age}, name{obj.name}{
  std::cout << "Move Constructor Called!!" << std::endl;
  obj.name = nullptr;
  obj.age = nullptr;
}

void MoveConstructor::printMyDetails(){
    if(name && age){
      std::cout << "My name is: " << name << " and i'm " << *age << " years old." << std::endl;
    }
}