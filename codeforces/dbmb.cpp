#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n,s,x;
        cin>>n>>s>>x;int sum=0;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
            sum+=a;
        }
        if(sum>s)
        cout<<"NO"<<endl;
        else
        {
            if((s-sum)%x==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        t--;

    }
}