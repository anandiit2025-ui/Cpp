#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++)
    {
       
        string s;
      getline(cin,s);
        s=" "+s;
        string s1="";
        for(int k=0;k<s.length();k++)
        {
            if(s.at(k)==' ')
            s1+=s.at(k+1);
        }
        cout<<s1<<endl;
    }
    return 0;
}