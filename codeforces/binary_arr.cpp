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
        if(vec[0]==0 && vec[n-1]==0)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
        t--;

    }
}