#include <iostream>

template<typename T>
class Array{
    T* arr;
    int size;
public:
    Array(T* arr, int size){
        for(int i=0; i<size; i++){
            this->arr[i]=arr[i];
        }
        this->size=size;
    }
    void print_arr(){
        for(int i=0; i<this->size; i++){
            std::cout<<this->arr[i]<<" ";
        }
        std::cout<<"\n";
    }
    void max(){
        T max;
        for(int i=0; i<this->size; i++){
            for(int j=0; j<this->size-1; j++){
                if(arr[j]<arr[j+1]){
                    max=arr[j+1];
                }
            }
        }
        std::cout<<"\nmax="<<max<<"\n";
    }
    void min(){
        T min;
        for(int i=0; i<this->size; i++){
            for(int j=0; j<this->size; j++){
                if(arr[j]>arr[j+1]){
                    min=arr[j];
                }
            }
        }
        std::cout<<"\nmin="<<min<<"\n";
    }
    void sort(){
        for(int i=0; i<this->size-1; i++){
            for(int j=0; j<this->size-1; j++){
                if(arr[j]>arr[j+1]){
                    std::swap(arr[j], arr[j+1]);
                }
            }
        }
    }
    void add_el(T val, int n){
       this->arr[n]=val;
    }
};

int main(){
    int size=5;
    int iarr[5]{2,7,9,6,1};
    double darr[5]{4.7,2.1,0.9,34.5,7.2};
    char carr[5]{'h','e','l','l','o'};

    Array<int> test(iarr, size);
    Array<double> stest(darr, size);
    Array<char> ttest(carr, size);

    test.print_arr();
    test.max();
    test.min();
    test.sort();
    test.print_arr();
    test.add_el(5, 3);
    test.print_arr();

    std::cout<<"\n\n";

    stest.print_arr();
    stest.max();
    stest.min();
    stest.sort();
    stest.print_arr();
    stest.add_el(4.5, 2);
    stest.print_arr();

    ttest.print_arr();
    ttest.max();
    ttest.min();
    ttest.sort();
    ttest.print_arr();
    ttest.add_el('r', 1);
    ttest.print_arr();
}