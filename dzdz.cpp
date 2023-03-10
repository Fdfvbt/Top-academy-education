#include <iostream>
#include <string>


template <typename T>
class Overcoat{
    std::string type;
    T coast;
public:
    Overcoat(){}
    Overcoat(const Overcoat &other){}
    Overcoat(const std::string type, const T coast){
        this->coast=coast;
        this->type=type;
    }
    T &operator==(){
        if(this->type==other.type){
            return 1;
        }else{
            return 0;
        }
    }
    T &operator=(){
        this->coast=other.coast;
        this->type=other.type;
    }
    T &operator>(){
        if(this->type>other.type){
            return 1;
        }else{
            return 0;
        }
    }
    void print(){
        std::cout<<"coast: "<<coast;
        std::cout<<"type: "<<type;
    }
};

template <typename T>
class Flat{
    int s;
    T coast;
public:
    Flat(){}
    Flat(const Flat &other){}
    Flat(const int s, const T coast){
        this->coast=coast;
        this->s=s;
    }
    T &operator==(){
        if(this->s==other.s){
            return 1;
        }else{
            return 0;
        }
    }
    T &operator=(){
        this->s=other.s;
        this->coast=other.coast;
    }
    T &operator>(){
        if(this->coast>other.coast){
            return 1;
        }else{
            return 0;
        }
    }
};

int main(){
    Overcoat<float> test("Shuba", 2300.50);
    Overcoat<int> test2("Shuba", 4900);
    test=test2;
    test.print();
}