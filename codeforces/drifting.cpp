#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {

        string s;int c=0,d=1;
        cin>>s;
        for(int i=0;i<s.size()-1;i++)
        {
             if(s[i]==s[i+1] && s[i]=='*')
           {
            cout<<"-1"<<endl;c=d=-1;
            break;
           }
           else if(s[i]=='>' && (s[i+1]=='<'|| s[i+1]=='*'))
           {
            cout<<"-1"<<endl;c=d=-1;
            break;}
            else if(s[i]=='*' && s[i+1]=='<')
            {
                 cout<<"-1"<<endl;c=d=-1;
            break;}
            
           else if(s[i]!=s[i+1])
           {
            
             if(s[i]=='<' && (s[i+1]=='>'))
            {
               if(d>c)
               c=d;
               d=1;
            }
             if(s[i]=='<'&& s[i+1]=='*')
             {
              if(d>c)
            c=d+1;    d=1;
             }
            if(s[i]=='*'&& s[i+1]=='>')
            {if(d>c)
            c=d+1;d=2;
            }
            
           }
           
           else
           d++;
           
        }
        if(c>=d && c!=-1)
        cout<<c<<endl;
        if(c<d )
        cout<<d<<endl;
        t--;
     }
    }