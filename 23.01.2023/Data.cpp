#include <iostream>
#include <string>

class User {
    std::string name;
    int age;
    int *array_o;
    int size;
    int cap;

    public:
    User() {
        std::cout << "Input name: ";
        std::cin >> this->name;
        std::cout << "Input age: ";
        std::cin >> this->age;
        std::cout<<"Input size: ";
        std::cin>>size;
        cap=size*2;
        array_o=new int[cap];
        for(int i=0; i<this->size; i++){
            std::cout << "Input otcenky: ";
            std::cin >> this->array_o[i];
        }
    }
    User(const User &other) {
        this->name=name;
        this->age=age;
        for(int i=0; i<this->size; i++){
            this->array_o[i]=array_o[i];
        }
    }
    explicit User(int cap){
    this->array_o=new int[cap];
    this->cap=cap;
    size=0;
}
    User(std::string name, int age, int *arr, int size_arr) {
        for(int i=0; i<this->size;i++){
            this->array_o[i]=arr[i];
        }
    }

    void print_data() {
        std::cout<< "\nName: " <<this->name;
        std::cout<< "\nAge: " <<this->age;
        std::cout<< "\nOtcenki: ";
        for(int i=0; i<this->size; i++){
            std::cout<< this->array_o[i] << " ";
        }
    }
    void print_avg_arr() {
        float sum=0;
        for(int i=0; i<this->size;i++){
            sum+=this->array_o[i];
        }
        std::cout<<"\navg = "<<sum/size;
    }

    void add_to_arr(int val) {
        if(this->size+1>cap){
            std::cout<<"\nError! size>cap";
        }else{
            this->array_o[size]=val;
            size+=1;
        }
    }
    void del_to_arr(int index) {
        if(index>this->size||index<0){
         std::cout<<"error! invalid number\n";
    }else{
        for(int i=index + 1; i<this->size; i++){
            this->array_o[i-1]=this->array_o[i];
        }
        this->size-=1;
    }
    }

    std::string getName() { return this->name; }
    int getAge() { return this->age; }

    void setName(std::string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
};


class Data{
    User *users;
    int size;

    public:
    Data() : Data(1) {}
    Data(const Data &other) {
        this->users = new User[other.size];
        this->size = other.size;
        for (int i = 0; i < this->size; ++i) {
            this->users[i].setName(other.users[i].getName());
            this->users[i].setAge(other.users[i].getAge());
        }
    }
    explicit Data(int count_users) {
        this->users = new User[count_users];
        this->size = count_users;
    }

    void print() {
        for (int i = 0; i < this->size; ++i) {
            this->users[i].print_data();
        }

    }

    ~Data() {
        delete [] this->users;
    }
};


int main(int argc, char const *argv[])
{
    int arr[5]={4,5,2,3,5};
    User egor;
    egor.print_data();
    egor.print_avg_arr();
    egor.print_data();
    egor.add_to_arr(9);
    egor.print_data();
    egor.del_to_arr(2);
    egor.print_data();
    return 0;
}