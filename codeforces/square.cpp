#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t; int a,b,c,d;
    while(t>0)
    {
        
     
      cin>>a;
      cin>>b;
      cin>>c;
      cin>>d;
      if(a==b&& a==c && a==d)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
      t--;

    }
}