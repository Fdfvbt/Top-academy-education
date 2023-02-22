#include <iostream>
#include <memory>

template <typename T>
class Array{
    int size;
    int cap;
    std::unique_ptr<T []> u_ptr;

public:
    Array():Array(0){}
    Array(const Array &other):Array(other.size){}

    Array(const int size) : u_ptr(new T[size*2]){
        this->size=size;
        for(int i=0; i<size; i++){
            u_ptr.get()[i]=i;
        }
    }

    void add_back(T val){
        //u_ptr = std::unique_ptr<T []>(new T[size + 1])
        u_ptr.get()[size]=val;
        size++;
    }
    void add_begin(T val){
        for(int i=size; i>=0; i--){
            std::swap(u_ptr.get()[i], u_ptr.get()[i-1]);
        }
        u_ptr.get()[0]=val;
        size++;
    }
    void del_end(){
        size--;
    }
    void del_begin(){
        for(int i=0; i<size; i++){
            std::swap(u_ptr.get()[i], u_ptr.get()[i+1]);
        }
        size--;
    }
    void print(){
        for(int i=0; i<size; i++){
            std::cout<<u_ptr.get()[i]<<" ";
        }
        std::cout<<"\n\n";
    }

};

int main(){
    Array<int> test(5);

    test.print();
    test.add_back(4);
    test.print();
    test.add_begin(2);
    test.print();
    test.del_end();
    test.print();
    test.del_begin();
    test.print();
}