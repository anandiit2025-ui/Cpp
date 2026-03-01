#include<iostream>
using namespace std;
int main()
{  long double t,k,sum,ans;
    long n;
    long double  x;
    cin>>t; 
    while(t>0)
    { sum=0;ans=0;
        cin>>n>>k>>x;
        
        long double arr[n];
        for(int i=0;i<n;i++)
        {cin>>arr[i];
           sum+=arr[i];
           
        }
        if(sum*k<x)
       {cout<<"0"<<endl;t--;
        continue;
       }
        
        if(sum<x)
        {
            while(sum<x)
            {
            x-=sum;ans+=n;
            
        }
    }
        for(int i=n-1;i>=0;i--)
        {
            x-=arr[i];
            if(x<=0)
            break;
            ans++;
            
        }
        if(x<=0)
        cout<<(long long)(n*k-ans)<<endl;
        else
        cout<<"0"<<endl;
       t--;
        }

  return 0;
    }

