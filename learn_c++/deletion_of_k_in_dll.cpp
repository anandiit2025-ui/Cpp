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
{
    Node*head=new Node(vec[0]);
    Node*prev=head;
    for(int i=1;i<vec.size();i++)
    {
        Node*temp=new Node(vec[i],NULL,prev);
        prev->next=temp;
        prev=temp;

    }
    return head;
}

Node*DeleteHead(Node*head)
{
    if(head==NULL || head->next==NULL)
    return NULL;
    Node*prev=head;
    head=head->next;
    head->back=NULL;
    
    delete(prev);
 return head;
}

Node*DeleteTail(Node*head)
{
    if(head==NULL || head->next==NULL)
    return NULL;
    Node*tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node*prev=tail->back;
    prev->next=NULL;
    tail->back=NULL;
    delete tail;
    return head;
}
Node*DeleteKthElement(Node*head,int k)
{
     if(head==NULL || head->next==NULL)
    return NULL;
    Node*temp=head;
    int c=0;
    while(temp)
    {
        c++;
        if(c==k)
        break;
        temp=temp->next;

    }
    

    if(temp->back==NULL)
    {
        return DeleteHead(head);
        
    }
    else if(temp->next==NULL)
    {
        return DeleteTail(head);
    }
    else
    {
        Node*front=temp->next;
        Node*prev=temp->back;
        prev->next=front;
        front->back=prev;
        temp->next=NULL;
        temp->back=NULL;
        delete(temp);
        return head;

    }

}
 void DeleteNode(Node*temp)
{
    Node*prev=temp->back;
    Node*front=temp->next;
    if(front == NULL)
    {
        prev->next=NULL;
        temp->back=nullptr;
        free(temp);
        return ;
    }
    prev->next=front;
    front->back=prev;
    temp->back=temp->next=nullptr;
    delete temp;

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
    vector<int>vec={14,56,79,24,9,67};
    Node*head=covertArrToDLL(vec);
    head=DeleteKthElement(head,4);
    DeleteNode(head->next->next);

    print(head);
    return 0;
}

