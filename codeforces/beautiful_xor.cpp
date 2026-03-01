#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
         int a,b;
         cin>>a>>b;
      
         int c=a,e=b,f=0,d=0;vector<int>vec;
         while(c>0)
         {
            d++;
            c=c>>1;
            
         }
         while(e>0)
         {
           f++;
           e=e>>1;
         }
        int i=0;
         if(f>d)
         cout<<"-1"<<endl;
         else
         {
            if(a==b)
            {cout<<"0"<<endl;
               t--;
               continue;
            }
         while(a!=b && i<=31)
         {
            if(((a&(1<<i))^(b&(1<<i)))==pow(2,i))
            { 
               a=a^(1<<i);int x=1<<i;
               vec.push_back(x);
            }
            i++;
         }
        cout<<vec.size()<<endl;
        
        for(int val:vec)
        cout<<val<<" ";
        cout<<endl;
         }
      
          t--;
      }
    }
