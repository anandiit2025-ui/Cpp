#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {
        long long n,k;
        cin>>n>>k;
        int a=1;
        int b=3;
        long long c=-2*n -2*k;
        long long ans=(-b+sqrt(b*b-4*a*c))/(2*a);
          
        cout<<n-ans<<endl;
       t--;
      
     }
    }