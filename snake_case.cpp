#include <iostream>
#include <string>

void print(std::string* snake_case, int size){
    std::cout<<"\n\n\nDone code:\n\n\n";
    for(int i=0; i<size; i++){
        for(int j=0; j<snake_case[i].size() ;j++){
            if(isupper(snake_case[i][j])){
                std::cout<<"_";
                std::cout<<std::tolower(snake_case[i][j]);
            }
            if(snake_case[i][j]==';'||snake_case[i][j]=='{'||snake_case[i][j]=='}'){
                std::cout<<"\n";
            }
            std::cout<<snake_case[i][j];
        }
        std::cout<<"\n";

    }
}

int main(){
    std::string snake_case[1000];
    std::string* camelCase;
    std::string test = "test";
    auto i = test[0];
    bool is_stop;
    int size =0;

    std::cout<<"Enter end. for stop texting\n\n";
    while(!is_stop){
        std::cin>>snake_case[size];
        if(snake_case[size]=="end."){
            is_stop=true;
        }
        size++;
    }

    print(snake_case, size);

}