#ifndef _BASE_
#define _BASE_

class Base{
  private:
    int id;

  public:
    Base(int id):id{id}{
      std::cout << "Base Constructor Called!!" << std::endl;
    }

    void printId();
};

#endif