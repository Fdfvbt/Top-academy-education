#include <iostream>

template <typename T>
class Array{
    T* a;
    int size;
    int cap;
public:
    typedef T value_type;

    Array():Array(0,0){}

    Array(const Array &other) : Array(other.a, other.size){}

    Array(const T*a, const int &size){
        this->size=size;
        this->cap=size*2;
        this->a=new T[cap];
        for(int i=0; i<size; i++){
            this->a[i]=a[i];
        }
    }

    void print_arr(){
        for(int i=0; i<this->size; i++){
            std::cout<<this->a[i]<<" "; 
        }
        std::cout<<"\n\n";
    }

    void add_back(T val){
        this->a[this->size]=val;
        this->size+=1;
    }
    void add_start(T val){
        this->size+=1;
        for(int i=this->size; i>=0; i--){
            std::swap(this->a[i], this->a[i+1]);
        }
        a[0]=val;
    }
    void del_back(){
        this->a[this->size]=0;
        this->size-=1;
    }
    void del_start(){
        this->a[0]=0;
        for(int i=0; i<this->size; i++){
            std::swap(this->a[i], this->a[i+1]);
        }
        this->size-=1;
    }
    int getsize() const {return this->size;}
    T &operator [](int i){
        return this->a[i];
    }
};
class Algoritm{
    int* a;
public:
    Algoritm(){}

    Algoritm(const Algoritm &other){}

    template <typename arr>
    void init(arr &array, int* a){
        for(int i=0; i< array.getsize(); i++){
            this->a[i]=a[i];
        }
    }

    template <typename arr>
    void print(const arr &array){
        for(int i=0; i< array.getsize(); i++){
            std::cout<<a[i]<<" ";
        }
        std::cout<<"\n\n";
    }
    template <typename arr>
    void sort(const arr &array){
        for(int i=0; i< array.getsize(); i++){
            for(int j=0; j< array.getsize()-1; j++){
                if(this->a[j]>this->a[j+1]){
                    std::swap(a[j], a[j+1]);
                }
            }
        }
    }
    template <typename arr>
    void max(const arr &array){
        arr max;
          for(int i=0; i< array.getsize(); i++){
            for(int j=0; j< array.getsize()-1; j++){
                if(this->a[j]>this->a[j+1]){
                    max=a[j];
                }
            }
        }
    }
    template <typename arr>
    void min(const arr &array){
        arr min;
          for(int i=0; i< array.getsize(); i++){
            for(int j=0; j< array.getsize()-1; j++){
                if(this->a[j]<this->a[j+1]){
                    min=a[j];
                }
            }
        }
    }
    template <typename arr>
    typename arr::value_type avg(const arr &array){
        arr sum;
        for(int i=0; i< array.getsize(); i++){
            sum+=this->a[i];
        }
        return sum/array.getsize();
    }
    template <typename arr>
    typename arr::value_type med(const arr &array){
        if(array.getsize()%2==0){
            return this->a[array.getsize()/2-1];
        }else{
            return this->a[array.getsize()/2];
        }
    }
};

int main(){
    srand(time(0));
    int size=5;
    int* a=new int[size];
    for(int i=0; i<size; i++){
        std::cin>>a[i];
    }
    Algoritm alg;


    Array<int> test(a, size);

    alg.init(test, a);
    alg.print(test);
    alg.sort(test);
    alg.print(test);
    std::cout<<alg.med(test);
    Array<int>::value_type i;
    //test.print_arr();
    //test.add_back(4);
    //test.print_arr();
    //test.add_start(1);
    //test.print_arr();
    //test.del_back();
    //test.print_arr();
    //test.del_start();
    //test.print_arr();
    //std::cout<<test[0];

}