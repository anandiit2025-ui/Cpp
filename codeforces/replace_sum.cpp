#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            a.push_back(k);
        }
         for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            b.push_back(k);
        }
        vector<pair<int,int>>vec;
        for(int i=0;i<q;i++)
        {
            int l,r;
            cin>>l>>r;
            vec.push_back({l,r});
        }int ma=b[n-1];
       for(int i=n-1;i>=0;i--)
       {int m=max(a[i],b[i]);
        if(m>ma)
        {
            ma=m;
            a[i]=m;
        }
        else
        {
            a[i]=ma;
        }
       }
       vector<long long> p(n+1, 0);
     for(int i = 0; i < n; i++)
     p[i+1] = p[i] + a[i];

     for(int i = 0; i < q; i++)
     {
    int l = vec[i].first;
    int r = vec[i].second;
    long long sum = p[r] - p[l-1];
    cout << sum << " ";
    }

       cout<<endl;
       t--;

    }
}