#include <iostream>

class point{
    int x, y;
public:
    point() : point(other.x, other.y){}
    point(const point &other) : point(other.x, other.y){}
    point(int x, int y){
        this->x=setx(x);
        this->y=sety(y);
    }
    int getx(){
        return this->x;
    }

    int gety(){
        return this->y;
    }

    void setx(){
        this->x=x;
    }
    void sety(){
        this->y=y;
    }
};

class user{
    
};

int main(){
point test_point(0,5);
point copy_point=test_point;



}