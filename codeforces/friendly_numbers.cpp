#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        long long n;
        cin>>n;
        
         if(n%9==0)
         {  long long x=n/9;
            if((x-10)%11==0)
            cout<<"0"<<endl;
            else
            cout<<"10"<<endl;
         }
        else
        cout<<"0"<<endl;
        t--;
    }
}