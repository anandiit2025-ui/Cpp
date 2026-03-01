#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;int n=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='Y')
            n++;

        }
        if(n>1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        t--;

    }
}