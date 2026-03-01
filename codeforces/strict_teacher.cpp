#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>b;int c=0;
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            b.push_back(a);
        }
        int x;cin>>x;
        sort(b.begin(),b.end());
        if(x>b[m-1])
        {
            cout<<n-b[m-1]<<endl;t--;continue;
        }
        else if(x<b[0])
        {cout<<b[0]-1<<endl;t--;continue;}
        else{
        for(int i=0;i<m-1;i++)
        {
            if(b[i]-x <=0 && b[i+1]-x>=0 )
            {
               
               if(x==b[i] || x==b[i+1])
               {
                cout<<0<<endl;break;
               }
               else if(x-b[i]>b[i+1]-x)
               {
                while(x!=b[i])
                {
                    x--;b[i]++;c++;
                }
                cout<<c<<endl;
                break;
               }
               
               else if(x-b[i]<b[i+1]-x)
               {
                while(x!=b[i+1])
                {
                    x++;b[i+1]--;c++;
                }
                cout<<c<<endl;
                break;
               }
               else
               {
                cout<<x-b[i]<<endl;
                break; 
               }


            }
        }
    }

        t--;
    }
}