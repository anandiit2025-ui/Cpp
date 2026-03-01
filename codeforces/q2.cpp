#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {

     int n;
     cin>>n;
     vector<int>vec;
     for(int i=0;i<n;i++)
     {
        int a;
        cin>>a;
        vec.push_back(a);
        
     }
     int a=0,b=0,sum=0,c=0;
     for(int i=0;i<n-1;i++)
     {
        a=abs(vec[i]-vec[i+1]);
        if(i<n-2)
        {
            b=abs(vec[i+2]-vec[i+1]);
        }
        else
         b=0;
         
        if(a+b>sum)
        {sum=a+b;c=vec[i+1];
        }

     }
     if(c==vec[n-2])
     {
     if(abs(vec[n-2]-vec[n-1])>abs((vec[n-2]-vec[n-3])))
     c=vec[n-1];
     }
     if(c==vec[1])
     {
        if(abs(vec[0]-vec[2])>abs((vec[1]-vec[2])))
        c=vec[0];
     }

     sum=0;
     for(int i=0;i<n-1;i++)
     {
        
        if(vec[i+1]==c)
        {
            if(i+1!=n-1)
            sum+=abs(vec[i]-vec[i+2]);i++;
        
        }
        else
        sum+=abs(vec[i]-vec[i+1]);
     }
     cout<<sum<<endl;
        t--;
    }
}