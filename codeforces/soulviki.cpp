#include<bits/stdc++.h>
using namespace std;
int main()
{
     int z;
     cin>>z;
     while(z>0)
     {
        int n;
        cin>>n;
        vector<int>vec;int b=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<n-1;i+=2)
        {
            if(vec[i]!=vec[i+1])
            {  b++;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(b==0)
        cout<<"YES"<<endl;
        z--;
     }
    }