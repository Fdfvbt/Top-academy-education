#include <iostream>
#include <string>

class Book{
    std::string* info;
    int size;
    int cap;
    int rep=0;
public:
    Book():Book(0, 1000){}

    Book(const Book &other):Book(other.info, other.size){}

    Book(const std::string* info, int size=1000){
        this->size=size;
        cap=size*2;
        this->info=new std::string[cap];
        for(int i=0; i<size; i++){
            this->info[i]=info[i];
        }
    }
    void add_cont(){
        if(size>cap-size/2){
            cap=size*3;
        }
        std::cout<<"enter surname: ";
        std::cin>>info[rep];
        rep++;
        std::cout<<"enter name: ";
        std::cin>>info[rep];
        rep++;
        std::cout<<"enter patronymic: ";
        std::cin>>info[rep];
        rep++;
        std::cout<<"enter mobile number: ";
        std::cin>>info[rep];
        rep++;
        std::cout<<"enter home number: ";
        std::cin>>info[rep];
        rep++;
        std::cout<<"enter work number: ";
        std::cin>>info[rep];
        rep++;
        std::cout<<"enter more info: ";
        std::cin>>info[rep];
        rep++;
    }
    void print_all_cont(){
        for(int i=0; i<size; i++){
            std::cout<<info[i]<<"\n";
            if(i%7==0){
                std::cout<<"\n\n\n";
            }
        }
    }
    void search_by_name(std::string name){
        for(int i=0; i<size; i++){
            if(info[i]==name){
                std::cout<<info[i-1]<<"\n";
                std::cout<<info[i]<<"\n";
                std::cout<<info[i+1]<<"\n";
                std::cout<<info[i+2]<<"\n";
                std::cout<<info[i+3]<<"\n";
                std::cout<<info[i+4]<<"\n";
                std::cout<<info[i+5]<<"\n";
            }
        }
    }

};

int main(){
    std::string* book;
    Book test(book, 1000);

    test.add_cont();
    test.print_all_cont();
    test.search_by_name("Ivan");
}