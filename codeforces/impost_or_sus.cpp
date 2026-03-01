#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
    cin>>t;
    while(t>0)
    {
        string s;
        cin>>s;
        int n=s.size();int c=0;
        if(s[0]=='u')
        c++;
        if(s[n-1]=='u')
        {c++;
            s[n-1]='s';
        }
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='u' && s[i+1]=='u')
            {c++;i++;
            }
        

        }
        cout<<c<<endl;
        t--;
    }
}