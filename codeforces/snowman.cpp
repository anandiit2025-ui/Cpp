#include<bits/stdc++.h>
using namespace std;
int main()
{
     int z;
     cin>>z;
     while(z>0)
     {
        int n;
        cin>>n;
        vector<int>a,b,c;
        for(int i=0;i<n;i++)
        {
            int q;cin>>q;
            a.push_back(q);
        }
        for(int i=0;i<n;i++)
        {
            int q;cin>>q;
            b.push_back(q);
        }
        for(int i=0;i<n;i++)
        {
            int q;cin>>q;
            c.push_back(q);
        }
        int i=0,j=0,k=0,h=0;
        while(j<n || k<n-1)
        {
            if(a[i]<b[j] && b[j]<c[k])
            {
               h++;
            }
            else
            {  h=0;
                if(k<n)
                k
            }
        }
        
        
           
        
        z--;
     }
    }