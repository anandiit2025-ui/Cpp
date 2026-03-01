#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {
        int n,d;
        cin>>n>>d;int sum=0,fact=1;
        
        
        
         
        cout<<"1"<<" ";
        if(d==3)
        cout<<"3"<<" ";
        else{
            for(int i=2;i<=n;i++)
        {
             fact*=i;
        }sum=fact*d;
        if(sum%3==0)
        cout<<"3"<<" ";
        }
       
        if(d==5)
        cout<<"5"<<" ";

        if(d==7)
        cout<<"7"<<" ";
        else
        {
            if(fact%3==0)
               cout<<"7"<<" ";
        }
    
         if(sum%9==0)
         cout<<"9"<<" ";
        cout<<endl;
        t--;
     }
    }