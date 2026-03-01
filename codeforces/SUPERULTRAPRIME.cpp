#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;vector<int>arr; arr.push_back(1);
        unordered_map<int,int>s;
        for(int i=1;i<n;i++)
        {
            s.insert({i,i+1});
        }s.erase(0);
         int j=0;
        int sum,y=1;int a=1,b=0;
        while(y<=n)
        {
        for(int z=1;z<=n;z++)
        {  if(s[z]==0)
             continue;
            j=s[z];
            sum=a+j;b=0; cout<<j<<"*"<<endl;
            
            for(int i=2;i*i<=sum;i++)
            {
                if(sum%i==0)
                {b=1;
                    break;}

            }
            if(b==1)
            { a=j;
            arr.push_back(j);
            s.erase(z);

            for(auto x:arr)
            cout<<x<<endl;
            cout<<"*"<<endl;
            for(auto x:s)
            cout<<x.first<<" "<<x.second<<endl;
           break;

        }
        }
        y++;



    }
    if(arr.size()!=n)
    cout<<"-1"<<endl;
    else{
    for(int x:arr)
    cout<<x<<" ";
    cout<<endl;}
    t--;
}
}