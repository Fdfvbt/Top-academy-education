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
        cout<<"enter avtor: ";
        cin>>avtor;
        cout<<"enter name of book: ";
        cin>>name;
        cout<<"enter izdatelstvo: ";
        cin>>izd;
        cout<<"enter kol-vo stranic: ";
        cin>>strs;
        cout<<"enter year: ";
        cin>>year;
        
    }

    Reservoir(const Reservoir &other){}

    Reservoir(int strs, int year, std::string izd, std::string name, std::string avtor){
        this->avtor=avtor;
        this->name=name;
        this->izd=izd;
        this->strs=strs;
        this->year=year;
    }

    book_by_avtor(std::string avtor) const {
        std::cout<<name;
    }
};