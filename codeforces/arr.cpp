#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        long long n,min=0,a,b;
        cin>>n;
        unordered_set<long long>s;
        for(long long i=0;i<n;i++)
        { long long a;
            cin>>a;min=a;
        s.insert(a);
        }
        vector<long long>vec;
        for(auto x:s)
        {
            vec.push_back(x);
            if(min>x)
            min=x;
        }

        for(long long i=2;i<=min+1;i++)
        {
            for(long long j=0;j<vec.size();j++)
            {
              a=vec[j];b=i;
              while(a>0 && b>0)
              {
                if(a>b)
                a=a%b;
                else
                b=b%a;
              }
              if((a==0 && b==1)|| (a==1 && b==0))
              { cout<<i<<endl;
                i=min+1;
                break;
              }
            }
        }

t--;

    }}