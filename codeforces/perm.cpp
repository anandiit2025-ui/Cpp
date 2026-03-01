#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {int n;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        int x=n,a=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==x)
            x--;
            else
            {
                a=i;vector<int>arr;
                for(int j=a;j<n;j++)
                {   arr.push_back(vec[j]);
                    if(x==vec[j])
                    {
                        break;
                    }

                }
                for(int k=arr.size()-1;k>=0;k--)
                {
                    vec[a]=arr[k];
                    a++;
                }
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        t--;
    }
}