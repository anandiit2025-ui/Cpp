#include<bits/stdc++.h>
using namespace std;
    struct Node
   {
    public:
    int data;
    Node*next;
    Node( int data1)
    {
        data=data1;
        next=nullptr;
    }
   };
   
   Node* convertarr2LL(vector<int>&arr)
   {
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
   }
   int main()
   {
    vector<int>arr={12,5,8,7};
    Node*head=convertarr2LL(arr);
    Node*temp=head;
    while(head)
    {
        cout<<head->data<<endl;
        head=head->next;
    }

   }