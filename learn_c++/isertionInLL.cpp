#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*next;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
     Node(int data1,Node*next1)
    {
        data=data1;
        next=next1;
    }

};

Node*convertarr2LL(vector<int>&arr)
{
   Node* head= new Node(arr[0]);
   Node*mover=head;
   for(int i=1;i<arr.size();i++)
   {
     Node*temp=new Node(arr[i]);
     mover->next=temp;
     mover=temp;
   }
   return head;
}
void print(Node*head)
{
    Node* temp=head;
    while(temp)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
}
Node*insert(Node*head,int val,int k)
{
     if(k==1)
     {
        head=new Node(val,head);
        return head;

     }
     Node*temp=head;int cnt=0;
     while(temp)
     {
        cnt++;
        if(cnt==k-1)
        {  Node*prev=temp;
           temp=new Node(val,temp->next);
           prev->next=temp;
           return head;
           break;
        }
        temp=temp->next;
     }

}

int main()
{
    vector<int>arr={1,5,8,3};
    Node*head=convertarr2LL(arr);
    head=insert(head,4,1);
    print(head);
    return 0;
}

