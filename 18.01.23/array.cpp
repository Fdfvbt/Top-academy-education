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

void insert(int ind, int n){
    if(ind>this->size||ind<0){
         std::cout<<"error! invalid number\n";
    }else{
        this->arr[ind]=n;
    }
   
}


void erase(int index){
    if(index>this->size||index<0){
         std::cout<<"error! invalid number\n";
    }else{
        for(int i=index + 1; i<this->size; i++){
            this->arr[i-1]=this->arr[i];
        }
        this->size-=1;
    }
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

    arr.insert(3, 22);
    arr.print();

    arr.erase(3);
    arr.print();
}