#ifndef _ACCESS_
#define _ACCESS_

class AccessMode{
  public:
    int x;

  protected:
    int y;

  private:
    int z;
};

class Derived1: public AccessMode{
    // x is public
    // y is protected
    // z is not accessible from Derived1
};

class Derived2 : protected AccessMode{
    // x is protected
    // y is protected
    // z is not accessible from Derived2
};

class Derived3 : private AccessMode // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from Derived3
};
#endif