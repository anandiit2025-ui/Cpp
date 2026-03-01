#include<iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {  
        long long a,b;
        cin>>a>>b;
        if((a&1)==0 && (b&1)==0)
        {
          cout<<((a*b/2)+2)<<endl;
        }
        else if((a&1)==1 && (b&1)==1)
        {
          cout<<a*b+1<<endl;
        }
        else if((a&1)==0 && (b&1)==1)
        {
        cout<<"-1"<<endl;
        }
        else
        { 
         if((b%4==0))
         {
          cout<<a*b/2+2<<endl;
         }
         else
         cout<<"-1"<<endl;
        }
        t--;
 
     }
    }