#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
      
        int n,m;
        cin>>n>>m;
        vector<int>vec;int y=0;
        for(int i=0;i<m;i++)
        {
            int a;cin>>a;
            vec.push_back(a);
            if(vec[i]>y)
            y=vec[i];
        }
        int x=0;
        for(int i=1;i<m;i++)
        {
           if(vec[i-1]>=vec[i])
           {
             cout<<"1"<<endl;
             x=-1;break;
           }
        }
        if(x==-1)
        {
            t--;continue;
        }
        else
        {
            cout<<n-y+1<<endl;
        }
        t--;

    }
}