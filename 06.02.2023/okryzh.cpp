#include <iostream>

class Point{
    int x, y;
public:
Point() : Point(0,0) {}

Point(int xP, int yP) : x{xP}, y{yP}

int setX(int val){this->x=val;}
int setY(int val){this->y=val;}
int getX(){return x;}
int getY(){return y;}
};

class Circle{
    int r;
    Point t;
public:
    Circle(int r, Point t){}

    int setX()
};

int main(){
    Point test;

    std::cout<<test.setX(7);
    std::cout<<test.setY(4);
    std::cout<<test.getX();
    std::cout<<test.getY();

}