#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t>0)
    {
    int n;
    cin>>n;
    vector<int>vec,arr(n+1,0),c; int k=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        if(a>0)
        arr[a]++;
        else
        {c.push_back(i);k++;}
        
    }int a=0;
    for(int i=n;i>0;i--)
      {
        if(arr[i]==0)
        {vec[c[a]]=i;
            a++;}

      }

     int l=0,r=n-1;int i=1,j=n;
     while(l<n)
     {
        if(vec[l]!=i)
        break;
        i++;l++;

     }
     while(r>=0)
     {
          if(vec[r]!=j)
          break;
          r--;j--;

     }
     if(l>=r)
     cout<<"0"<<endl;
     else
     cout<<r-l+1<<endl;
     
     t--;
   
    
    }

}