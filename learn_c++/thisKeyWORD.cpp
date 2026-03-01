#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs; float avg;
    Cricketer(string name,int runs,float avg) // parameterized constructor
    { 
       this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    void print()
    
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<avg<<endl;
    }

    void printTrue()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<avg<<endl;
    }
    
};

int main()
{
    Cricketer c1("Sachin",18426,44.83f);
     Cricketer c2("Virat",15000,55.2);
     c1.print(); /* prints garbage value because  in constructor we have used same variables names(name=name,runs=runs,avg=avg) so compiler 
                    thinks it is assigning name to local variable name of constructor 
                    but the original varible name is not assigned anything
                    ** TO SOLVE THIS PROBLEM THAT WE WANT TO USE SAME VARIBLE NAMES AND STILL WANT FUNCTION TO PRINT 
                    CORRECT VALUE OF NAME , RUNS ,AVG WE USE "this" KEYWORD WHICH WILL TELL COMPILER THAT WE WANT
                    TO PRINT VALUES OF ORIGINAL VARIABLE VALUES WHICH WE PASSED TO CONSTRUCTOR
                    (this->name=name,this->runs=runs,this->avg=avg)*/  
     c2.print();

     c1.printTrue(); // now it will print correct values
    return 0;
}