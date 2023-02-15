#include <iostream>

using namespace std;

void print(int* a, int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\n";
}

int check(int* a, int size){
    int nsize=0;
    for(int i=0; i<size; i++){
        if(a[i]!=a[i+1]){
            nsize++;
        }
    }
    return nsize;
}

void arr(int* a, int* b, int size, int size2){
    int rep=0, size3;
    size3=check(a, size)+check(b, size2);
    int* c=new int[size3];
    for(int i=0; i<size-1; i++){
        if(a[i]!=a[i+1]){
        c[i]=a[i];
        rep++;
        }
    }
    for(int i=0; i<size2-1; i++){
        if(b[i]!=b[i+1]){
        c[rep]=b[i];
        rep++;
        }
    }
    print(c, size+size2);
}
void init_arrs(int* a, int size){
    for(int i=0; i<size; i++){
        cout<<"Enter array's element: ";
        cin>>a[i];
    }
}

int main(){
    int size1=5, size2=3;
    int a[size1], b[size2];
    init_arrs(a, size1);
    cout<<"\n";
    init_arrs(b, size2);
    print(a, size1);
    print(b, size2);
    arr(a, b, size1, size2);
}