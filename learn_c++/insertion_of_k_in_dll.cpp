#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*next;Node*back;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
     Node(int data1,Node*next1,Node*back1)// to create a Double linked list
    {
        data=data1;
        next=next1;
        back=back1;
    }

};

Node*covertArrToDLL(vector<int>&vec)
{   Node*head;
     if(vec.size()>0)
     head=new Node(vec[0]);
    else
    head=NULL;
    Node*prev=head;
    for(int i=1;i<vec.size();i++)
    {
        Node*temp=new Node(vec[i],NULL,prev);
        prev->next=temp;
        prev=temp;

    }
    return head;
}
Node*insertK(Node*head,int k,int val)
{
    Node*temp=head;int c=0;
    if(head==nullptr)
    {   
        
        head=new Node(val,head,NULL);
        
        return head;
        
    }
    if(k==1){
        Node*prev=new Node(val,head,NULL);
        head->back=prev;
        return prev;
    }
    while(temp)
    {c++;
        if(c==k-1)
        break;
        temp=temp->next;

    }
    if(temp->next==NULL)
    {     
        Node*tail=new Node(val,NULL,temp);
        temp->next=tail;
        return head;
    }
    else 
    {
        Node*front=temp->next;
        Node*insert=new Node(val,front,temp);
        temp->next=insert;
        front->back=insert;
        return head;
    }
}
void print(Node*head)
{
   while(head)
   {
    cout<<head->data<<" ";
    head=head->next;
   }
}

int main()
{
    vector<int>vec={1,2,3};
    Node*head=covertArrToDLL(vec);

    head=insertK(head,4,17);
    print(head);
    return 0;
}

