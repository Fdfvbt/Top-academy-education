#include <iostream>
#include <string>

class Book{
    std::string fio, info;
    int dnum, rnum, mnum;
public:
    Book(){
        std::cin>>fio;
        std::cin>>info;
        std::cin>>dnum;
        std::cin>>rnum;
        std::cin>>mnum;
    }

    Book(const Book &other){}

    Book(const std::string &fio, const std::string &info, const int &dnum, const int &rnum, const int &mnum){
        this->fio=fio;
        this->info=info;
        this->dnum=dnum;
        this->rnum=rnum;
        this->mnum=mnum;
    }
    

};