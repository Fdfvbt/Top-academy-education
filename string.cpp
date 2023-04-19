#include <iostream>
#include <string>

class String{
    std::string str;
public:
    String():String(""){}
    String(const String &other):String(other.str){}
    String(const std::string str){
        this->str=str;
    }
    void clear_str(){
        str="";
        std::cout<<str;
    }
    String operator+(String str){
        return (this->str+str);
    }
};