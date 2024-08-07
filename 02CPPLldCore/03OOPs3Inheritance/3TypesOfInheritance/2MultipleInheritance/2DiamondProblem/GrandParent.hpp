#ifndef _GRAND_PARENT_
#define _GRAND_PARENT_
#include <iostream>
#include <string>

class GrandParent{
  private:
    std::string gpName;

  public:
    // constructor for grandparent
    GrandParent(std::string gpName):gpName{gpName}{
      std::cout << "Called Grandparent Constructor!!" << std::endl; 
    }

    // Prints Grandfather Name
    void printGrandParentName();
};

#endif