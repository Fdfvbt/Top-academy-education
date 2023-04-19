#include <iostream>

using namespace std;

template <typename T>
T plus(T fnum, T snum){
    return fnum+snum;
}
template <typename T>
T minus(T fnum, T snum){
    return fnum-snum;
}
template <typename T>
T div(T fnum, T snum){
    return fnum/snum;
}
template <typename T>
T mult(T fnum, T snum){
    return fnum*snum;
}

template <typename T>
int main(){
    bool end=true;
    T num1, num2;
    char sym;
    while(end){
        cout<<"Вводите символы в примере через пробел\n\n";
        cin>>num1>>sym>>num2;
        if(sym=='+'){
            plus(num1, num2);
            
        }
        else if(sym=='/'){
            div(num1, num2);
            
        }
        else if(sym=='-'){
            minus(num1, num2);
            
        }
        else if(sym=='*'){
            mult(num1, num2);
            
        }
    }
    
}