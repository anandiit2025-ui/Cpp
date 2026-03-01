#include<iostream>
using namespace std;
int main()
{
     int t;int m1,m2,m3,a;
     cin>>t;
     while(t>0)
     {  a=0;
        int n; cin>>n;
        while(n>=3)
        {
         m1=n/3;
         m2=m1;
         m3=n-m1-m2;
         a+=m1;
         n=m3;
        }


        
     
     cout<<a<<endl;
     t--;

}return 0;
}
