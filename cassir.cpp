#include <iostream>

bool check_sdscha(int* kassa){
    for(int i=0; i<20; i++){
        if(kassa[i]==5){
            kassa[i]=0;
            return true;
        }
    }
    return false;
}

bool check_sdscha_two(int* kassa){
    for(int i=0; i<20; i++){
        for(int j=1; j<19; j++){
            if(kassa[i]==10 && kassa[j]==5){
            kassa[i]=0;
            return true;
        }
        }
    }
    return false;
}

int main(){
    int graf[4][7];
    int s;
    for(int i=0; i<4; i++){
        
    }

}