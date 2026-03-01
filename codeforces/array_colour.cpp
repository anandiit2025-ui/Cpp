#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>vec;int c=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i%2==0)
            vec.push_back({a,0});
            else
             vec.push_back({a,1});
        }
        sort(vec.begin(),vec.end());
         for(int i=0;i<n-1;i++)
         {
            
            if(vec[i].second==vec[i+1].second)
            {
                cout<<"NO"<<endl;c++;
                break;
            }

         }
         if(c==0)
         cout<<"YES"<<endl;
         t--;
    }
}