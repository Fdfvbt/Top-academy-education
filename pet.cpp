#include <iostream>

class Pet{
protected:
    std::string name;
    std::string* info;
    int size;
    int cap;
public:
    Pet(){}
    Pet(const Pet &other){}
    Pet(const std::string &name, const std::string* info){
        this->name=name;
        this->size=size;
        cap=size*2;
        this->info=new std::string[cap];
        for(int i=0; i<size; i++){
            this->info[i]=info[i];
        }
    }
    int getSize(){return size;}
};

class Cat:Pet{
public:
    Cat(){
        info=new std::string[cap];
        std::cout<<"Enter cat's name: ";
        std::cin>>name;
        std::cout<<"Enter info about cat(no more than 20 words): ";
        for(int i=0; i<20; i++){
            std::cin>>info[i];
        }
    }  
};
class Dog:Pet{
public:
    Dog(){
        info=new std::string[cap];
        std::cout<<"Enter cat's name: ";
        std::cin>>name;
        std::cout<<"Enter info about cat(no more than 20 words): ";
        for(int i=0; i<20; i++){
            std::cin>>info[i];
        }
    }  
};
class Parrot:Pet{
public:
    Parrot(){
        info=new std::string[cap];
        std::cout<<"Enter cat's name: ";
        std::cin>>name;
        std::cout<<"Enter info about cat(no more than 20 words): ";
        for(int i=0; i<20; i++){
            std::cin>>info[i];
        }
    }  
};

int main(){
    Cat test;
    Dog test2;
    Parrot test3;
}