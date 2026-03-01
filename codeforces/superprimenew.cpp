#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;cin>>n;vector<int>arr;int a,b=0,sum;
        if(n<=4)
        {cout<<"-1"<<endl;t--;continue;
        }
        
        for(int i=1;i<=n;i+=2)
        {
            arr.push_back(i);
           
            }
            a=arr.back();

            for(int i=2;i<=n;i+=2)
            {
                sum=i+a;
                for(int j=2;j*j<=sum;j++)
                {
                    if(sum%j==0)
                    {b=i;arr.push_back(i);
                        break;}
                }
                if(b>0)
                break;
            }

            for(int i=2;i<=n;i+=2)
            {
                if(i==b)
                continue;
                arr.push_back(i);
            }

            for(int x:arr)
            cout<<x<<" ";
            cout<<endl;

            t--;
        


    }
}