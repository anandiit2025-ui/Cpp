#include<bits/stdc++.h>
using namespace std;
    struct Node  // we can write (class Node ) as well both works in same way
   {
    public:
    int data;
    Node*next;
    Node( int data1,Node*next1) // parameterized constructor
    {
        data=data1;
        next=next1;
    }
   };

   int main()
   {Node x(2,nullptr); // x is object  ,, here we have used self defined data type Node here
    
    Node*y=new Node(2,nullptr);
    cout<<y<<endl;
    cout<<y->data<<endl;
    cout<<(*y).next<<endl;

    Node*z=&x;
    cout<<z<<endl;

   }