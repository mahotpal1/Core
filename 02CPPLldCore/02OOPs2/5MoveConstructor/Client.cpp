#include <iostream>
#include <stdexcept>
#include "MoveConstructor.hpp"

int main(){
  MoveConstructor mv1 = MoveConstructor(new int(26), "Vishal");
  mv1.printMyDetails(); 
  std::cout << std::endl;
  MoveConstructor mv2 = std::move(mv1);
  try{
    mv1.printMyDetails();
  }catch(std::exception const ex){
    std::cout << ex.what() << std::endl;
  }
  std::cout << std::endl;
  mv2.printMyDetails(); 
  std::cout << std::endl;

  return 0;
}