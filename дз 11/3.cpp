#include <iostream>

using namespace std;

void num(int* a, int size){
    int otric=0;
    int polozh=0;
    int null=0;
    for(int i=0; i<size; i++){
        if(a[i]>0){
            polozh++;
        }else if(a[i]<0){
            otric++;
        }else{
            null++;
        }
    }
    cout<<"otric = "<<otric<<"\npolozh = "<<polozh<<"\nnull = "<<null;
}

int main()
{
    int size=6;
    int a[size]={-3,1,0,-2,7,4};
    num(a, size);
    
    
}
