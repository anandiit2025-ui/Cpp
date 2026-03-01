#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        int first=0,second=1;int sum=0;
        while(second<n)
        {
            if(vec[first]>=0 && vec[second]>=0)
            {
                sum+=vec[first];
                first=second;
            }
            else if(vec[first]>=0 && vec[second]<=0)
            {
                if(vec[first]>-vec[second])
                  {sum+=vec[first];
                    first=second;
                  }
                  else
                  {
                  sum-=vec[second];

                  }
            }
         else if(vec[first]<0 && vec[second]<0)
            {
                sum-=vec[second];
            }
            else
            { second++;
            continue;
            }
           
            second++;
            cout<<sum<<endl;
        }
        cout<<sum<<endl;
        t--;

    }
}