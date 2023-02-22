#include <iostream>
#include <memory>

template <typename T>
class my_ptr{
    static map<T*, int> ptrs;
    public:
        my_ptr() : my_ptr(0) {}
        my_ptr(const my_ptr &other) : my_ptr(other.ptr) {
            this->ptrs[other.ptr]++;
            this->ptr=other.ptr;
        }
        my_ptr(T* ptr) {
            this->ptr=ptr;
            this->ptrs[ptr]=1;
        }

    ~my_ptr(){
        this->ptrs[this->ptr]--;
        if(this->ptrs[this->ptr]==0){
            delete this->ptr;
        }
    }
};


int foo(){
    //int* ptr=new int[5];

    //std::unique_ptr<int> u_ptr(ptr);
    //std::unique_ptr<int> u_ptr2(ptr);

    //std::shared_ptr<int> sh_ptr(new int());
    //std::shared_ptr<int> sh_ptr2(sh_ptr);

    my_ptr<int> ptr(new int());

    std::cout<<"Hello";

    return 1;
}

int main(){
    try{
        foo();
    }catch foo();
}