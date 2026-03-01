#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;vector<int>vec;
        if(n%2==0)
        {
            cout<<"-1"<<endl;
            t--;
            continue;
        }
        for(int i=1;i<=n;i++)
         vec.push_back(i);
         int arr[n];int a=1,b=0;
         arr[n-1]=vec[n-1];
         for(int i=0;i<n-1;i++)
         {
            arr[i]=vec[a];a+=2;
        
            if(a==n)
            a=0;
            
         }
         for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
         cout<<endl;
 t--;
    }
}