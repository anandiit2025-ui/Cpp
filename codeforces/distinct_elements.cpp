#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        vector<int>arr(n,1);long long sum=0;unordered_set<int>x;
        
        
        for(int i=1;i<n;i++)
        { sum=0;
              while(sum!=vec[i])
            {sum=0;
            for(int j=0;j<=i;j++)
            {
                for(int k=j;k<=i;k++)
                {
                    x.insert(arr[k]);
                }
                sum+=x.size();
                x.clear();
            }
            if(sum!=vec[i]) 
            arr[i]++;
            }
        }
        for(int val:arr)
        cout<<val<<" ";
        cout<<endl;
        t--;
    }
}
       