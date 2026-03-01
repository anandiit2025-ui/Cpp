#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,b,x,n,p;
    double a;
    cin>>n;
    while(t>0)
    { 
        cin>>a;cout<<" ";
        cin>>b;cout<<" ";
        cin>>x;
        a=pow(a,b);
        p=((int)(a/x))*x;
        cout<<p<<endl;
        t--;
    }
    return 0;
}