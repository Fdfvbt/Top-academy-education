#include <iostream>
#include <string>

struct data{
int year, month, day;
data(): data(1989, 05, 25){}

data(int y, int m, int d){
this->year=y;
this->month=m;
this->day=d;
}
};

class user{
    static int count_user;
    static int sumallusers;
    int id;
    std::string name;
    int sum;
    data user_data;
public:
user() : user("Ivan", user_data){}
user(const user &other) : user(other.name, other.user_data){
    this->id=id;
    this->sum=sum;
}
user(std::string name, data new_data){
    static int prevID=0;

    this->id=0;
    this->sum=0;
    this->name=name;
    this->user_data.day=new_data.day;
    this->user_data.month=new_data.month;
    this->user_data.year=new_data.year;
}

void print_user_data(){
    std::cout<<"\nID:  "<<this->id<<"\n";
    std::cout<<"sum: "<<this->sum<<"\n";
    std::cout<<"data: "<<user_data.day<<"."<<user_data.month<<"."<<user_data.day;
}
void addsum(int sum){
    this->sum=this->sum+sum;
    sumallusers=sumallusers+sum;
}
//void printcountuser(){

//}
};

int user::sumallusers {0};

int main(){
user steve("Steve", data(1997, 05, 21));
user defoult;

steve.addsum(300);
defoult.addsum(450);

steve.print_user_data();
defoult.print_user_data();
}