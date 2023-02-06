#include <iostream>
#include <time.h>

using namespace std;

bool prost(int a){
    if(a<2){
        return false;
    }
    if(a<=3){
        return true;
    }
    return(a*a)%24==1;
}

int main(){
    int a, b, k;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(int i=a; i<b; i++){
        if(prost(i)){
            cout<<i<<" ";
            k++;
        }
    }
    cout<<k;
}