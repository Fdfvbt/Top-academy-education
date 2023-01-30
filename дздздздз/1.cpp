#include <iostream>

using namespace std;

void init(int** arr, size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j]=rand()%10;
        }
    }
}
void init(double** arr, size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j]=rand()%10;
        }
    }
}
void init(char** arr, size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j]=rand()%10;
        }
    }
}

void print(int**arr, size){
    for(int i=0; i<size; i++){
        cout<<"\n";
        for(int j=0; j<size; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){

}