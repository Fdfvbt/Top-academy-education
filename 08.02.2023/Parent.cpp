#include <iostream>
#include <string>

class Parent{
protected:
    std::string name;

public:
    Parent():Parent("Parent"){}

    Parent(const Parent &other):Parent(other.name){}
    Parent(const std::string &name){
        this->name=name;
        std::cout<<"Hi! My name is "<<name<<"\n";
    }

    virtual void print_name(){
        std::cout<<"My name "<<name<<"\n";
    }

    ~Parent(){
        std::cout<<name<<" is gone"<<"\n";
    }
};

class Child : public Parent{
    std::string last_name;

public:
    Child() : Child("Child"){}
    Child(const Child &other) : Child(other.last_name){}
    Child(const std::string name, const std::string &last_name) : Parent(name){
        this->last_name=last_name;
        std::cout<<"My name is "<<this->name<<" "<<last_name<<"\n";
    }
    Child(const std::string &last_name){
        this->last_name=last_name;
        std::cout<<"My name is "<<this->name<<" "<<last_name<<"\n";
    }
    void print_name(){
        std::cout<<"My name "<<name<<" "<<last_name<<"\n";
    }

    void printLastName(){
        std::cout<<"My last name is "<<last_name<<"\n";
    }

    void sayHi(const std::string &name){
        std::cout<<"Hi "<<name<<"!\n";
    }
    ~Child(){
        std::cout<<"Child "<<this->last_name<<" is gone\n";
    }
};

int main(){
    Parent *test=new Child("Ivan", "Ivanov");
    test->print_name();
    ((Child*)test)->sayHi("Mike");
   // test_child.sayHi("Mike");

   delete test;
}