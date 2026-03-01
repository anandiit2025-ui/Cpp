#include<bits/stdc++.h>
using namespace std;

struct ListNode
{  public:
    int data;
    ListNode*next;
    ListNode(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
ListNode*convertArrtoList(vector<int>&vec)
{ListNode*head;
    if(vec.size()>0)
     head=new ListNode(vec[0]);
  ListNode*mover=head;
  for(int i=1;i<vec.size();i++)
  {
    ListNode*temp=new ListNode(vec[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;

}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
      ListNode*temp=head;int c=0;
      if(head==NULL || head->next==NULL)
      return NULL;

      while(temp)
      {
       c++;temp=temp->next;
      }
      temp=head;
      int x=c-n+1;c=0;
      if(x==1)
      {
        ListNode*front=head->next;
        delete head;
        return front;
      }
        while(temp!=NULL)
        {
        c++;
        if(c==x-1)
        break;
        temp=temp->next;
        }
        
        ListNode*front=temp->next;
        temp->next=front->next;
        delete(front);
        return head;
    }
};
void print(ListNode*head)
{
    ListNode*temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    ListNode*head=convertArrtoList(vec);
    Solution obj;
    head=obj.removeNthFromEnd(head,9);
    print(head);
    return 0;

}