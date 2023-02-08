#include <iostream>

class Matrix{
    int** mat;
    int size;
public:
    Matrix(){}
    Matrix(const int &size, const int**mat){
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
    }

    void initrand(){
        srand(time(0));
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

};

int main(){

}