#include <iostream>

int sred(int**arr, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        for(int j=0; i<size; j++){
            if(i==0){
                sum+=arr[i][j];
            }
        }
    }
    return sum/size;
}

int main(){
    srand(time(NULL));
    int size;
    std::cout<<"Enter size of array: ";
    std::cin>>size;
    int** arr=new int*[size];
    for(int i=0; i<size; i++){
        arr[i]=new int[1000000];
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
        arr[i][j]=rand()%85-85;
        } 
    } 
    sred(arr, size);
}