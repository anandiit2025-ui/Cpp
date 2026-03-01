#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t>0)
    {
        int n;cin>>n;
        set<int>s;
        for(int i=0;i<n;i++)
        { int a; cin>>a;
            s.insert(a);
        }
       for(int i=0;i<=(*s.rbegin())+1;i++)
       {
        if(s.find(i)==s.end())
         {
             cout<<i<<endl;
             break;
         }

       }
      t--;
    }
}