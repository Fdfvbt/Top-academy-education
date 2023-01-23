#include <iostream>

using namespace std;

float avg(int* a, int size){
    float sum=0;
    for(int i=0; i<size; i++){
        sum+=a[i];
    }
    return sum/size;
}

int main()
{
    int size=6;
    int a[size]={3,5,9,2,7,7};
    cout<<"\naverage from array: ";
    cout<<avg(a, size);
}