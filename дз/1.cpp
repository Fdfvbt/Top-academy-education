#include <iostream>

using namespace std;

void print_arr(int* a, int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

void rand_arr(int* a, int* b, int size, int size2){
    for(int i=0; i<size; i++){
        a[i]=rand() %10;
    }
    for(int i=0; i<size2; i++){
        b[i]=rand() %10;
    }
}

void new_arr(int size1, int size2, int* a, int* b){
    int size3=size1+size2;
    int rep=0;
    int* c=new int[size3];
    for(int i=0; i<size1; i++){
        c[i]=a[i];
        rep++;
    }
    for(int i=0; i<size2; i++){
        c[rep]=b[i];
        rep++;
    }
    print_arr(c, size3);
}

int main(){
    int size, size2;
    cout<<"enter 1 size: ";
    cin>>size;
    cout<<"enter 2 size: ";
    cin>>size2;
    int* a=new int[size];
    int* b=new int[size2];
    rand_arr(a, b, size, size2);
    new_arr(size, size2, a, b);
}