#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        string s,si,sp;int x=0;
        cin>>s;vector<int>vec,v;
        sp=s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                si+='0';x++;vec.push_back(i);
            }
            else
            {
               v.push_back(i);
            }
        }
        for(int i=0;i<n-x;i++)
        si+='1';
        int a=0;
        while(s!=si){
        s[v[a]]='0';
        s[vec[x-1]]='1';
        a++;
        x--;
            
        }
        if(a&1)
        {cout<<"Alice"<<endl;
            cout<<"2"<<endl;
            cout<<v[0]+1<<" ";
            for(int i=n-1;i>=0;i--)
            {
                if(sp[i]=='0')
                {cout<<i+1<<endl;break;
                }
            }
        }
        else{
        cout<<"Bob"<<endl;
        if(x>=1 && n-x>=1)
        {  cout<<"2"<<endl;
            cout<<v[1]+1<<" "; int c=0;
             for(int i=n-1;i>=0;i--)
            {
                if(sp[i]=='0' )
                {
                    if(c==1)
                    {cout<<i+1<<endl;break;
                    }
                    c++;
                }
            }
          }
        }
        t--;

    }
    
}