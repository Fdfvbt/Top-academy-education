#include <iostream>

using namespace std;

void print(int**a, int size, int size2){
    for(int i=0; i<size; i++){
        cout<<"\n";
        for(int j=0; j<size2; j++){
        cout<<a[i][j]<<" ";
    }
    }
 cout<<"\n";
}

void init(int** a, int size1, int size2, int d1, int d2){
    srand(time(NULL));
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
        a[i][j]=rand()%(d2-d1+1)+d1;
    }    
    }
}

float avg(int** a, int size, int size2){
    float sum=0;
    for(int i=0; i<size; i++){
         for(int j=0; j<size; j++){
            sum+=a[i][j];
    }
    }
    return sum/(size*size2);
}

int main(){
    int size, size2, d1, d2;
    cout<<"enter size1: ";
    cin>>size;
    cout<<"enter size2: ";
    cin>>size2;
    cout<<"enter diap1: ";
    cin>>d1;
    cout<<"enter diap2: ";
    cin>>d2;
    int** a=new int*[size];
    for(int j=0; j<size; j++){
        a[j]=new int[size2];
    }
    init(a, size, size2, d1, d2);
    print(a, size, size2);
    cout<<avg(a, size, size2);
    for(int j=0; j<size; j++){
        delete[] a[j];
    }
    delete[] a;
}