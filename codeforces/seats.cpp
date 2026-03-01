#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;  string s;
        cin>>s;
        vector<int>vec,arr;int x=0;int ans=0; int l=0; int one=0;
        for(int i=0;i<n;i++)
        {   x++;
            if(s[i]=='1')
            {  one++;
                  if(s[l]=='0')
                  {ans+=(x-1)/3;
                    if((x-1)%3==2)
                    ans++;
                    }
                else 
                {   int y=((x-l-2)/3);
                    if(y>0)
                    ans+=y;

                }
                

                l=i;
            }
        }
        if(one==0)
        ans+=(n+2)/3;
        if(s[n-1]=='0' && s[l]=='1' && (n-l>2))
        {  
            ans+=(n-l)/3;
        }
        cout<<ans+one<<endl;
        t--;


    }
}