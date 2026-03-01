#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int gpa;
    Student(string n,int r,int g) // parameterized constructor for s1, CONSTRUCTOR OVERLOADING 
    { 
        name=n;
        roll=r;
        gpa=g;
    }
    Student() // default constructor for s2
    {}
    Student(string n,int r) // parameterized constructor for s3
    {
        name=n;
        roll=r;
    }
    
};
void print(Student s)
{
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"GPA: "<<s.gpa<<endl;
}


int main()
{
    Student s1("Anand",12,9);
    Student s2;  // if we will remove the default constructor ,it will give an error because when any user himself creates a constructor , the default constructor gets removed from the program
    s2.name="Ravi";
    s2.roll=15;
    s2.gpa=8;
    Student s3("Aditya",20); 
    s3.gpa=7;

    Student s4=s1; // copy constructor called here 
    s4.name="Harish"; //it is called deep copy because changes made in s4 will not reflect in s1

    Student s5(s1); // copy constructor called here
    s5.name="Suresh"; //it is called deep copy because changes made in s5 will not reflect in s1

    print(s1);
    print(s2);
    print(s3);
    print (s4);
    print (s5);
    return 0;
}
