#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;vec.push_back(a);
    }
    int m=1<<n;
    vector<vector<int>>arr(m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            arr[i].push_back(vec[j]);
        }
    }
    for(int i=0;i<m;i++)
    { cout<<"{";
       for(int val:arr[i])
       cout<<" "<<val;
       cout<<" }"<<endl;
    }
}