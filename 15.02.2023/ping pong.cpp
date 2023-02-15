#include <iostream>

const int x=41;
const int y=11;

bool is_player(int x, int y, int pl_x, int pl_y){
    if(x==pl_x){
        if(y==pl_y||y==pl_y+1||y==pl_y-1){
            return true;
        }
    }
    return false;
}
void print(int x, int y, int pl_y, int pl_x, int pl_2_x, int pl_2_y, int b_x, int b_y){
    for(int i=0; i<=y; i++){

        for(int j=0; j<=x; j++){
            if(i==0 || i==y){
                std::cout<<"*";
            }else if(j==0||j==x){
                std::cout<<"*";
            }else if(is_player(j, i, pl_x, pl_y)){
                std::cout<<"|";
            }else if(is_player(j, i, pl_2_x, pl_2_y)){
                std::cout<<"|";
            }else if(i==b_y&&j==b_x){
                std::cout<<"@";
            }
            else{
                std::cout<<" ";
            }
        
        }
        std::cout<<"\n";
    }
}
void move_ball(int &b_x, int &b_y, int pl_x, int pl_y, int pl_2_x, int pl_2_y, int &dir_x){
    b_x+=dir_x;

    if(is_player(b_x, b_y, pl_x+1, pl_y)){
        dir_x=-dir_x;
    }else if(is_player(b_x, b_y, pl_2_x-1, pl_2_y)){
        dir_x=-dir_x;
    }else if(b_x<=0||b_x>=x){
        b_x=x/2;
        b_y=y/2;
    }
}

int main(){


    int pl_x=2;
    int pl_y=y/2;

    int pl_2_x=x-2;
    int pl_2_y=y/2;

    int b_x=x/2;
    int b_y=y/2;

    int dir_x=-1;

    bool end=false;

    while(!end){
        print(x, y, pl_y, pl_x, pl_2_x, pl_2_y, b_x, b_y);
        char in;
        in=getchar();
        if(in=='a'){
            if(pl_y!=2){
            pl_y--;
            }
        }else if(in=='z'){
            if(pl_y!=y-2){
            pl_y++;
            }
        }else if(in=='q'){
            end=true;
        }
        move_ball(b_x, b_y, pl_x, pl_y, pl_2_x, pl_2_y, dir_x);
        system("clear");
    }

}