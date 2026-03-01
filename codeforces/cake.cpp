#include<bits/stdc++.h>
using namespace std;
int main()
{
     int z;
     cin>>z;
     while(z>0)
     {
        int a,b;
        cin>>a>>b;int s=min(a,b);int t=a+b-s;
        int c=0;int x=1;int p=s,q=t,e=0,f=0,d;
        while(s-x>=0)
        {
            c++;
            s=s-x;
            x*=4;

        }
        x=2; d=0;
        while(t-x>=0)
        {
            d++;
            if(d==c)
            break;
            t=t-x;
            x*=4;

        }x=2;
        while(p-x>=0)
        {
            f++;
            p=p-x;
            x*=4;
        }
        x=1;
         while(q-x>=0)
        {
            
            e++;
            if(e==f+1)
            break;
            q=q-x;
            x*=4;

        }
        int m=max((e+f),(c+d));
        cout<<m<<endl;
         z--;

     }
    }