#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {  int n;
        cin>>n;
        string s;
        cin>>s;int a=0,b=0;
        for(int i=0;i<n;i++ )
        {
            if(s[i]=='1')
            break;
            a++;
        }
         for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            break;
            b++;
        }
        int x=0;int ans=0;
        for(int i=a+1;i<n-b;i++)
        {
             if(s[i]=='0')
             x++;
             if(s[i]=='1')
             {
                if(x>ans)
                ans=x;
                x=0;
             }
        }
        if(ans>a+b)
        cout<<ans<<endl;
        else
        cout<<a+b<<endl;

        
       
        t--;

    }
}