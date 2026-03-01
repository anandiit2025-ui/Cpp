#include <iostream>
using namespace std;
int main()
{
    string s;
    int n;int t,k;
    cin>>t;
    while(t>0)
    {

    
    cin>>n;
     
    cin>>s;char ch;
     k=0;
    for(int i=0;i<n-2;i++)
    {
        
      if(s.at(i)!=s.at(i+1) && s.at(i)==s.at(i+2))
      {
        
        ch=s.at(i+2);
        s.at(i+2)=s.at(i+1);

        s.at(i+1)=ch;
        cout<<s<<endl;}
      k++;
      }

    t--;
    cout<<(k);
    

}}