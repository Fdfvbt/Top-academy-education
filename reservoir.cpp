#include <iostream>
#include <string>

class Reservoir{
    std::string avtor;
    std::string name;
    std::string izd;
    int strs;
    int year;
public:
    Reservoir(){
        std::cout<<"enter avtor: ";
        std::cin>>avtor;
        std::cout<<"enter name of book: ";
        std::cin>>name;
        std::cout<<"enter izdatelstvo: ";
        std::cin>>izd;
        std::cout<<"enter kol-vo stranic: ";
        std::cin>>strs;
        std::cout<<"enter year: ";
        std::cin>>year;
        
    }

    Reservoir(const Reservoir &other){}

    Reservoir(int strs, int year, std::string izd, std::string name, std::string avtor){
        this->avtor=avtor;
        this->name=name;
        this->izd=izd;
        this->strs=strs;
        this->year=year;
    }

    void book_by_avtor(std::string avtor) const {
        std::cout<<name;
    }
};