#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
       int k,x;
       cin>>k>>x;vector<int>vec;
       int z=1<<(k+1);
       int a=z/2,b=a;
       if(x<z-x && a<2*x)
       {
        while(a!=2*x)
        { b=b>>1;
          a=a+b;vec.push_back(2);
      
       }vec.push_back(1);
    }
        else if(x>z-x && b<2*(z-x))
       {
        while(b!=(2*(z-x)))
        {
            a=a>>1;
            b=b+a;vec.push_back(1);
        }vec.push_back(2);
       }else if(x<z-x && a>2*x)
       {
        while(a!=2*x)
        {
        
            b=b>>1;a=a-b;
            vec.push_back(2);

        }
        vec.push_back(1);
       }
       else if(z-x<x && b>2*(z-x))
       {
        while(b!=2*(z-x))
        {
            a=a>>1;b=b-a;
            vec.push_back(1);
        }
        vec.push_back(2);
       }
       
       
       else
       {
        cout<<"0"<<endl;
        cout<<endl;
        t--;continue;
       }

    cout<<vec.size()<<endl;
    for(int x:vec)
    cout<<x<<" ";
    cout<<endl;
        
        t--;

    }
}