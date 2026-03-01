#include<bits\stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {  
        int a,b,c;
        cin>>a>>b>>c;
        int x=pow(10,a-1);int d=0;int p=x;int k;
        for(int y=pow(10,b-1)+1;;y++)
        { d=0;k=y;
        while(x>0 && y>0)
        {
            if(x>y)
            x=x%y;
            else
            y=y%x;
        }
        if(x==0)
        {  
             while(y!=0)
            {
                y/=10;
                d++;
            }
            if(d==c)
            {
                cout<<p<<" "<<k<<endl;
                break;
            }
            
        }
        if(y==0)
        {  
            
            while(x!=0)
            {
                x/=10;
                d++;
            }
            if(d==c)
            {
                cout<<p<<" "<<k<<endl;
                break;
            }

        }
        y=k;x=p;
        
     }
     t--;
    }
}
