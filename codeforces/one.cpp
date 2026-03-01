#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {
        int n;
        cin>>n;
        string s;
        cin>>s;int c=0,d=0;
        for(int i=0;i<n;i++)
        {
            string st=s.substr(i,4);
            if(st=="2025")
           {c++;i+=3;
           }
            if(st=="2026")
           {d++;
            cout<<"0"<<endl;
            break;
           }
           
        }
        if(c!=0 && d!=1)
        cout<<"1"<<endl;
        if(c==0 && d==0)
        cout<<"0"<<endl;
    t--;
     }
    }