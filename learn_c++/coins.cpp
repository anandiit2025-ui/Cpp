#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,n,d; string s,p,k; vector<int>vec;
    cin>>t;
    while(t>0)
    {  d=0;p="";
        cin>>n>>s;k=s;vec={};
        for(int i=0;i<n;i++)
       { p+='1';
        if(s[i]=='1')
           vec.push_back(i);;
       }

        while(k!=p)
        { 
            k=k.substr(1,n-1)+k[0];
             
            for(int i=0;i<vec.size();i++)
            {
                k[vec[i]]='1';
            }
            d++;

        }
        cout<<d<<endl;
        t--;
        }
    }
