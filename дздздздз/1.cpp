#include <iostream>

using namespace std;

void init(int** arr, int size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j]=rand()%10;
        }
    }
}
void init(double** arr, int size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j]=rand()%10;
        }
    }
}
void init(char** arr, int size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            arr[i][j]=rand()%10;
        }
    }
}

void print(int**arr, int size){
    for(int i=0; i<size; i++){
        cout<<"\n";
        for(int j=0; j<size; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
void print(double**arr, int size){
    for(int i=0; i<size; i++){
        cout<<"\n";
        for(int j=0; j<size; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
void print(char**arr, int size){
    for(int i=0; i<size; i++){
        cout<<"\n";
        for(int j=0; j<size; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
void max(int**arr, int size){
    int max=arr[0][0];
    for(int i=0; i<size; i++){
        if(arr[i][i]>max){
            max=arr[i][i];
        }
    }
    std::cout<<"max="<<max<<"\n";
}
void max(double**arr, int size){
    double max=arr[0][0];
    for(int i=0; i<size; i++){
        if(arr[i][i]>max){
            max=arr[i][i];
        }
    }
    std::cout<<"max="<<max<<"\n";
}
void max(char**arr, int size){
    char max=arr[0][0];
    for(int i=0; i<size; i++){
        if(arr[i][i]>max){
            max=arr[i][i];
        }
    }
    std::cout<<"max="<<max<<"\n";
}

void min(int**arr, int size){
    int min=arr[0][0];
    for(int i=0; i<size; i++){
        if(arr[i][i]<min){
            min=arr[i][i];
        }
    }
    std::cout<<"min="<<min<<"\n";
}
void min(double**arr, int size){
    double min=arr[0][0];
    for(int i=0; i<size; i++){
        if(arr[i][i]<min){
            min=arr[i][i];
        }
    }
    std::cout<<"min="<<min<<"\n";
}
void min(char**arr, int size){
    char min=arr[0][0];
    for(int i=0; i<size; i++){
        if(arr[i][i]<min){
            min=arr[i][i];
        }
    }
    std::cout<<"min="<<min<<"\n";
}
void sort(int**arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size; j++){
            if(arr[i][j]>arr[i][j+1]){
                swap(arr[i][j], arr[i][j]);
            }
        }
    }
}
void sort(double**arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size; j++){
            if(arr[i][j]>arr[i][j+1]){
                swap(arr[i][j], arr[i][j]);
            }
        }
    }
}
void sort(char**arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size; j++){
            if(arr[i][j]>arr[i][j+1]){
                swap(arr[i][j], arr[i][j]);
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int size=rand()%10;
    int** arr1=new int*[size];
    for(int i=0; i<size; i++){
        arr1[i]=new int[size];
    }
    double** arr2=new double*[size];
    for(int i=0; i<size; i++){
        arr2[i]=new double[size];
    }
    char** arr3=new char*[size];
    for(int i=0; i<size; i++){
        arr3[i]=new char[size];
    }
    init(arr1, size);
    init(arr2, size);
    init(arr3, size);
    print(arr1, size);
    cout<<"\n";
    print(arr2, size);
    cout<<"\n";
    print(arr3, size);
    cout<<"\n";
    max(arr1, size);
    max(arr2, size);
    max(arr3, size);
    min(arr1, size);
    min(arr2, size);
    min(arr3, size);
    sort(arr1, size);
    sort(arr2, size);
    sort(arr3, size);
}