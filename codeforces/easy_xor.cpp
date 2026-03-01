#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;
        vector<int>vec,arr(n,0),j;int c=0,d=0;
        for(int i=n;i>=1;i--)
        vec.push_back(i);int a=0;
        while(c!=n)
        { d=0;
            for(int i=2;i<=n-1;i++)
            {
                if(i^vec[a]<vec[a])
                {
                    arr[n-c-1]=i;
                    arr[i]=vec[a];c++;d++;j.push_back(i);j.push
                    break;
                }
            }
            if(d==0)
            arr[0]=vec[a];
            a++;
        }




    }
}