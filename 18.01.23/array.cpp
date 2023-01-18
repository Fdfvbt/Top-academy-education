#include <iostream>

class Array{
    int *arr;
    int size;
    int cap;

public:
explicit Array(int cap){
    this->arr=new int[cap];
    this->cap=cap;
    size=0;
}

void add_back(int val){
    if(this->size+1 > this->cap){
        std::cout<< "No: cap = "<<this->cap<<" size = "<<this->size;
    }else{
        this->arr[size] = val;
        size+=1;
    }
}

void print() const {
    std::cout << "[";
    for(int i=0; i<this->size; i++){
        std::cout<<this->arr[i]<<" ";
    }
std::cout<<"]\n";
}

~Array(){
    delete [] this->arr;
}

};

int main(){
    Array arr(15);

    arr.add_back(1);
    arr.add_back(2);
    arr.add_back(3);
    arr.add_back(4);

    arr.print();

    arr.add_back(5);
    arr.add_back(6);

    arr.print();
}