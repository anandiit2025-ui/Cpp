#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs; float avg;
    Cricketer(string name,int runs,float avg) // parameterized constructor
    { 
       this->name=name;// this->name refers to variable "name" of outside the constructor
        this->runs=runs;
        this->avg=avg;
    }
    void print()
    
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<avg<<endl;
    }
    

    
};

int main()
{
    Cricketer* c1=new Cricketer("Sachin",18426,44.83f);  //dynamic object ponter creation using new operator
    cout<<c1->avg<<endl; //accessing member using object pointer
    c1->avg=50.5; //modifying member using object pointer
    cout<<c1->avg<<endl;
    

}