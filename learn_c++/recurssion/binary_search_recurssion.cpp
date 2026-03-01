#include<iostream>
#include<vector>
using namespace std;
int mid;
int search(vector<int> &vec,int start,int end,int target)
{  
    mid=start+(end-start)/2;

      if(vec[mid]==target || start>=end)
      { 
      return mid;
      }
      else if(vec[mid]>target)
      search(vec,start,mid-1,target);
      else if(vec[mid]<target)
      search(vec,mid+1,end,target);
    else
      return -1;
}
int main()
{
    vector<int> vec={1,2,3,4,6,8,9};
    int l=search(vec,0,6,2);
    cout<<l<<endl;
    return 0;
}