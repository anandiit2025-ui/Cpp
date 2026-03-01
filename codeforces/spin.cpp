#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {  
        int l,a,b,max=a%l,max1=-2;
        cin>>l>>a>>b;set<int>s;
         for(int i=0;;i++)
         {
            max=(a+(i*b))%l;
             if(s.find(max)==s.end())
             {s.insert(max);
               if(max>max1)
               max1=max;
             }
             else
             break;
             
             
         }
        
        cout<<max1<<endl;
        t--;
     }
    }
