#include <iostream>

class Drob{
    int a,b;
public:
    Drob() : Drob(0,0) {}

    Drob(const Drob &other) : Drob(other.a, other.b) {}


    Drob(int a, int b){
        this->a=a;
        this->b=b;
    }
    void print(){
        std::cout<<this->a <<"/"<<this->b<<"\n";
    }
    void input(){
        std::cout<<"input a: ";
        std::cin>>a;
        std::cout<<"input b: ";
        std::cin>>b;
    }
    void plus(int val){
        val=val*this->b;

        this->a=this->a+val;
    }
    void minus(int val){
        plus(-val);
    }
    void ymnozh(int val){
        this->a=val*this->a;
    }
    void del(int val){
        this->b=val*this->b;
    }
};

int main(){
    Drob test;

    test.input();
    Drob copy = test;

    test.print();
    test.plus(4);
    test.print();
    test.minus(3);
    test.print();
    test.ymnozh(5);
    test.print();
    test.del(2);
    test.print();


}