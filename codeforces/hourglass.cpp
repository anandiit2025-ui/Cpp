 #include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {
        int s,k,m;
        cin>>s>>k>>m;int a,c;
        a=s;c=0;
        while(m>=k)
        {  
            if(s>k)
            {
                if(c%2==0)
                s=k;
                else
                s=a;
                m-=k;
            }
            else if(s==k)
            {
                s=a;
                m-=k;
            }
            else
            m-=k;
           c++;
        }
        if(s<m)
        cout<<0<<endl;
        else 
        cout<<s-m<<endl;
        t--;
     }
    }