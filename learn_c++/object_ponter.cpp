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
void change(Cricketer c)
    {
        c.avg=55;
    }
    void changeByPointer(Cricketer* c)
    {
        c->avg=60;// arrow operator to access member using object pointer  c->=60 means (*c).avg=60 , both will work same
    }

int main()
{
    Cricketer c1("Sachin",18426,44.83f);
     cout<<c1.avg<<endl;
     change(c1);
     cout<<c1.avg<<endl;// avg will remain unchanged =44.83 as change function works on copy of c1  i.e, it is pass by value
        changeByPointer(&c1);// passing address of c1
        cout<<c1.avg<<endl;// avg will be changed to 60 as we passed address of c1





     Cricketer* ptr=&c1;//object pointer
     cout<<(*ptr).runs<<endl;//dereferencing pointer to access member = c1.runs
    (*ptr).avg=52.6;// modifying avg of c1 using pointer
    cout<<c1.avg<<endl;
}