#include <iostream>
#include <string>
#include <fstream>

class Calc{
public:
    Calc(){}

    virtual void plus(int a, int b){
        std::cout<<a<<"+"<<b<<"="<<a+b<<"\n";
    }
    virtual void minus(int a, int b){
        std::cout<<a<<"-"<<b<<"="<<a-b<<"\n";
    }
};

class SuperCalc : public Calc{
public:
    virtual void mult(int a, int b){
        std::cout<<a<<"*"<<b<<"="<<a*b<<"\n";
    }
    virtual void div(int a, int b){
        std::cout<<a<<"/"<<b<<"="<<a/b<<"\n";
    }
};

class CalcResult : public SuperCalc{
    std::string result;
public:
void mult(int a, int b){
    this->result=std::to_string(a)+"*"+std::to_string(b)+"="+std::to_string(a*b);
}

void div(int a, int b){
    this->result=std::to_string(a)+"/"+std::to_string(b)+"="+std::to_string(a/float(b));
}

void infile(std::string n_file){
    std::ofstream fout;

    fout.open(n_file);
    if (fout.is_open()) {
        fout<<result;
    } else {
        std::cout << "File not open!!!!\n";
    }
    fout.close();
    }
};

class SaveCalc : public Calc{
    std::string last_operation;
public:
    void plus(int a, int b){
        this->Calc::plus(a, b);
        this->last_operation=std::to_string(a)+"+"+std::to_string(b)+"="+std::to_string(a+b);
    }
    void minus(int a, int b){
        this->Calc::plus(a, b);
        this->last_operation=std::to_string(a)+"-"+std::to_string(b)+"="+std::to_string(a+b);
    }
    std::string getLastOperation(){
        return this->last_operation;
    }
};

int main(){
    Calc def_calc;
    SuperCalc super_calc;
    SaveCalc save_calc;
    CalcResult cresult;

    def_calc.minus(100, 50);
    def_calc.plus(5, 7);

    super_calc.minus(10, 8);
    super_calc.minus(50, 10);
    super_calc.mult(7, 11);
    super_calc.div(512, 16);

    save_calc.minus(77, 8);
    save_calc.plus(8, 60);
    std::cout << save_calc.getLastOperation() << "\n";

    cresult.div(3, 6);
    cresult.infile("calc_result.txt");
}