#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {
        string s;int c=0;
        
        cin>>s;
        for(int i=s.size()-1;s.at(i)=='0';i--)
        {
           c++;

        }
       for(int i=s.size()-c-1;i>=0;i--)
        {
            if(s.at(i)!='0')
            c++;
        
           
        }

        cout<<c-1<<endl;
        t--;


     }
    }
