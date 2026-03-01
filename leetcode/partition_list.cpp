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
    ListNode* partition(ListNode* head, int x) {
        vector<int>vec,arr,real;
        ListNode*temp=head;
        while(temp)
        {
            if(temp->data<x)
            vec.push_back(temp->data);
            else
            arr.push_back(temp->data);
            temp=temp->next;
        }
          for(int i=0;i<arr.size();i++)
          vec.push_back(arr[i]);
        ListNode*p= convertArrtoList(vec);
          return p;
   
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
    vector<int>vec={2,1};
    ListNode*head=convertArrtoList(vec);
    Solution obj;
    head=obj.partition(head,2);
    print(head);
    return 0;

}