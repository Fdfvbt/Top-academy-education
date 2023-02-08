#include <iostream>

using namespace std;

int nod(int a, int b){
    while(a > 0 && b > 0){
 
        if(a > b)
            a %= b;
 
        else
            b %= a;
    }
    return a + b;
}


int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<nod(a, b);   
}