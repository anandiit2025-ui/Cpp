#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n,b,c,d;
        cin>>n;
        vector<int>vec,arr;int sum1=0;
        for(int i=0;i<n;i++)
        {
           int a;cin>>a;
           vec.push_back(a);
           
        }
       for(int i=0;i<n-1;i++)
       sum1+=abs(vec[i+1]-vec[i]);
        int sum=sum1;
        for(int i=1;i<n-1;i++)
        {
           c=abs(vec[i]-vec[i+1])+abs(vec[i]-vec[i-1]);
           d=abs(vec[i+1]-vec[i-1]);
           if(sum1-c+d<sum)
           { 
            sum=sum1-c+d;
           }

        }
         c=abs(vec[1]-vec[0]);d=abs(vec[n-1]-vec[n-2]);
         if(sum1-c<sum && sum1-c<=sum1-d)
         {cout<<sum1-c<<endl;
         }
         else if(sum1-d<sum && sum1-d<=sum1-c)
         {
           cout<<sum1-d<<endl;
         }
         else
         {
           cout<<sum<<endl;
         }
         t--;
    }
}