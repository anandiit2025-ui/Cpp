#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t>0)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=b+c;
        
        while(x<=d && d>=c){
        d--; 
        }
        cout<<b<<" "<<c<<" "<<d<<endl;
        t--;
        
    }
}
