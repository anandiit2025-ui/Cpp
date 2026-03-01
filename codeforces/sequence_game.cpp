#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; 
    while(t>0)
    { 
        int n,a,x,MIN,MAX;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {  cin>>a;
        vec.push_back(a);
        
        }
        cin>>x;
        MIN=vec[0];MAX=vec[0];
        for(int i=1;i<n;i++)
        {
          if(MIN>vec[i])
          MIN=vec[i];
          if(MAX<vec[i])
          MAX=vec[i];

        }
        

        if(MIN<=x && MAX>=x )
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

  t--;
    }

}