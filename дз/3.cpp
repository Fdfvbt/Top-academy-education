#include <iostream>

using namespace std;

class Arr{
    int* a;
    int size=4;
public:
Arr(const Arr &other) {
        this->size=size;
        for(int i=0; i<this->size; i++){
            this->a[i]=a[i];
        }
    }

void print_arr(){
    for(int i=0; i<this->size; i++){
        cout<<this->a[i]<<" ";
    }
}

void rand_arr(){
    for(int i=0; i<this->size; i++){
        this->a[i]=rand() %10;
    }
}

void erase(int index){
    if(index>this->size||index<0){
         std::cout<<"error! invalid number\n";
    }else{
        for(int i=index + 1; i<this->size; i++){
            this->a[i-1]=this->a[i];
        }
        this->size-=1;
    }
}

void chet(){
    for(int i=0; i<this->size; i++){
        if(this->a[i]%2==0){
            erase(this->a[i]);
        }
    }
}

void nechet(){
    for(int i=0; i<this->size; i++){
        if(this->a[i]%2!=0){
            erase(this->a[i]);
        }
    }
}
};

int main(){
    Arr test;
    int us;
    while(1){
        test.rand_arr();
        test.print_arr();
        cout<<"\n1 - chethye\n2 - nechetnye\n3 - exit\n";
        cin>>us;
        if(us==1){
            test.chet();
        }else if(us==2){
            test.nechet();
        }else{
            break;
        }
        test.print_arr();
    }
    
}