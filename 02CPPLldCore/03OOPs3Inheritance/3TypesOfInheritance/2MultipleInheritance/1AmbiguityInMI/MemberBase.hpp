#ifndef _MEMBER_BASE_
#define _MEMBER_BASE_

class MemberBase{
  private:
    int id;

  public:
    MemberBase(int id):id{id}{
      std::cout << "Member Constructor called!!" << std::endl;
    }

    void printId();
};

#endif