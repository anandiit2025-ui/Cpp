 #include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;long long x=0,y=0,z;
     while(t>0){
        long long a,b;
        cin>>a>>b;
        if(a==x && b==y)
        {cout<<z<<endl;
            t--;
            continue;
        }
        else
        x=a;y=b;
        
        if(a==1)
        {
            cout<<b*b<<endl;z=b*b;
            t--;
            continue;
        }

        
        if(b%a==0)
        {
           long long y=b/a;
           for(int i=2;i<=y;i++)
           {
            if(y%i==0)
            y=i;

           }
           cout<<y*b<<endl;z=y*b;
           t--;
           continue;

        }else
        {
             for(int i=2;i<=a;i++)
            {
                if(a%i==0)
                {cout<<b*i<<endl;z=b*i;break;
                }
           
            }
        }
        t--;
    }
}