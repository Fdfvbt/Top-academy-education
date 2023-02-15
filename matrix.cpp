#include <iostream>

template <typename T>
class Matrix{
    T** mat;
    int size;
public:
    Matrix(){
        size=1;
        mat=new int*[size];
        for(int i=0; i<size; i++){
            this->mat[i]=new int[size];
        }
    }
    Matrix(const int &size, const T**mat){
        this->size=size;
        mat=new int*[size];
        for(int i=0; i<size; i++){
            this->mat[i]=new int[size];
        }
    }
    void print(){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                std::cout<<mat[i][j]<<" ";
            }
        }
        std::cout<<"\n\n";

    }

    void initrand(){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                mat[i][j]=rand()%10;
            }
        }
    }
    void init(){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                std::cout<<"enter element: ";
                std::cin>>mat[i][j];
            }
        }
    }
    T& operator+(T val){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                mat[i][j]+=val;
            }
        }
    }
    T& operator-(T val){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                mat[i][j]-=val;
            }
        }
    }
    T& operator*(T val){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                mat[i][j]*=val;
            }
        }
    }
    T& operator/(T val){
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                mat[i][j]/=val;
            }
        }
    }
};

int main(){
    srand(time(0));
    int size=5;
    int** arr=new int*[size];
    for(int i=0; i<size;i++){
        for(int j=0; j<size; j++){
            arr[j]=new int[size];
        }
    }
    Matrix<int> test;
    test.initrand();
    test.print();
    test.init();
    test.print();
    test+2;
    test.print();
    test-4;
    test.print();
    test*2;
    test.print();
    test/2;
    test.print();
}