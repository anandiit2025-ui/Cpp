#include<iostream>
using namespace std;
void change(int a) //pass by value
{
    a=20;
}
void change1(int *a) //pass by reference using pointers
{
    *a=20;
}
void change2(int &b) //pass by reference using alias (&b is not ampersant of b ,it is alias)
{
    b=20;
}

int main()
{
    int a=10;
    int &c=a;
    cout<<c<<endl;
    change(a);
    cout<<"value of a inside main function by pass by value   \n"<<a<<endl;
    change1(&a);
    cout<<"value of a inside main function by pass by reference using pointers    \n"<<a<<endl;
    change2(a);
     cout<<"value of a inside main function by pass by refernce using alias  \n"<<a<<endl;


     // array is a constant pointer aur ye aisa pointer h jo array ke 0th index pe point karta h  
// means array ka address 0th index ka hi address hota h
int arr[] = {1,2,3,4,5};
cout<<arr<<endl;
cout<<&arr[0]<<endl;
cout<<*arr<<endl;
/* array me hr index ki value ke address me 4 ka difference hota h yani agr 0th index pe 100 address h to 1st ka address 104 hoga 2nd ka 108 hoga etc*/
// array is a constant pointer as this expression "arr=&a;" gives an error
cout<<*(arr+1)<<endl;  //output 2
cout<<*(arr+2)<<endl;//output 3
cout<<*(arr+3)<<endl;//output 4
cout<<*(arr+4)<<endl;//output 5


/* increament , decreament pointer 
agar pointer ptr int type ka h to
    ptr ++ karne pe ptr me +4 bytes ho jaata h*/
    int *ptr=&a;
    cout<<ptr<<endl; // output 0x61fefc
    ptr++;
    cout<<ptr<<endl;// output 0x61ff00  (4 bytes get incresed)


    /* c++ me do pointers ko add nhi kar sakte bas subtract kar sakte h
    
    un dona pointers ka subtraction "number of blocks of type(int,short,float,etc deta h)" 
     example*/
     int *ptr1=&a;
     int *ptr2=ptr+2;
     cout<<(ptr2-ptr1)<<endl;
    

    return 0;
}
