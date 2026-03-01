#include<bits/stdc++.h>
using namespace std;
void print(int i,vector<int>&vec,int arr[],int n)
{
    if(i==n)
    {
        for(auto it:vec)
        cout<<it<<" ";
        
        if(vec.size()==0)
        cout<<"{}";
        cout<<endl;
        return;
    }

    // to add an element to subsequence
    vec.push_back(arr[i]);
    print(i+1,vec,arr,n);
    // to remove an added element from the subsequence
    vec.pop_back();
     // to not select an element from the subsequence
    print(i+1,vec,arr,n);
    
}
int main()
{
    int n=4;
    int arr[]={3,1,2,4};
    vector<int>vec;
    print(0,vec,arr,n);
    return 0;
}