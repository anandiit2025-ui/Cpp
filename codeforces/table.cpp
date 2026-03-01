#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {int n,h,l;
        cin>>n>>h>>l;
        vector<int>vec,arr;int j=0,r;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);

        }
        for(int i=0;i<n;i++)
        {
            if(vec[i]<=h || vec[i]<=l)
            arr.push_back(vec[i]);
        }

        sort(arr.begin(),arr.end());int c=0;
        r=arr.size()-1;
        while(j<r)
        {
            if((arr[j]<=l && arr[r]<=h) || (arr[j]<=h &&arr[r]<=l))
            {c++;}
        

            j++;r--;
        }
        cout<<c<<endl;
        
        t--;
    }
}