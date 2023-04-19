#include <iostream>
#include <fstream>
#include <string>

std::string read_all_file(const std::string &filename){
    std::ifstream fin(filename);
    std::string result="";

    if(fin.good()){
        while(fin.good()){
            std::string tmp_line;
            std::getline(fin, tmp_line);
            result += tmp_line + "\n";
        }
    }else{
        std::cout<<"File not open\n";
    }
    return result;
}

std::string diff_texts(const std::string &t1, const std::string &t2){
    int n_char=0;
    int n_line=0;
    std::string result= "";

    while(t1[n_char]!='\0' && t2[n_char]!='\0'){
        if(t1[n_char]!=t2[n_char]){
            std::cout<<"Files is not the same\n";
            while (t1[n_line]!='\n')
            {
                result +=t1[n_line];
                n_line++;
            }
            
        }
        n_char++;
        if(t1[n_char]=='\n'){
            n_line=n_char+1;
        }
    }
    return "";
}

int main(){

    std::string tmp_name;
    std::string text1;
    std::string text2;

    std::cout<<"Enter file name: ";
    std::cin>>tmp_name;
    text1 = read_all_file(tmp_name);
    std::cout<<"Enter file name 2: ";
    std::cin>>tmp_name;
    text2=read_all_file(tmp_name);

    std::cout<< diff_texts(text1, text2)<<"\n";

}