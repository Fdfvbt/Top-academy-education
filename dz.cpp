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
    void plus(int a, int b){
        if(this->b==b){
        this->a+=a;

        }else{
            int temp=this->b;
            this->a*=b;
            this->b*=b;
            a*=temp;
            b*=temp;
            this->a+=a;
        }
    }
    void minus(int a, int b){
        this->a-=a;
    }
    void ymnozh(int a, int b){
        this->a*=a;
        this->b*=b;
    }
    void del(int a, int b){
        int temp=this->a;
        this->a=this->b;
        this->b=temp;
        ymnozh(a, b);
    }
};

int main(){
    Drob test;

    test.input();
    Drob copy = test;

    test.print();
    test.plus(4, 5);
    test.print();
    test.minus(6, 5);
    test.print();
    test.ymnozh(5, 3);
    test.print();
    test.del(5, 3);
    test.print();


}