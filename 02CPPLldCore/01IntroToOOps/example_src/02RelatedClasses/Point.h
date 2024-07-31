#ifndef _POINT_H_
#define _POINT_H_

class Point{
  private:
    int x;
    int y;

  public:
    Point();
    Point(int x, int y);

    int getX(){
      return this->x;
    }

    int getY(){
      return this->y;
    }

    ~Point();
};

#endif