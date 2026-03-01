#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
      int n;
      cin>>n;
      vector<int>arr;
      for(int i=0;i<n;i++)
      {
        int a;
        cin>>a;
        arr.push_back(a);
      }
      sort(arr.begin(),arr.end());int a=arr[0];int c=0;
         for(int i=n-1;i>=1;i--)
         {
            if(arr[i]-a<arr[i-1])
            {cout<<a<<endl;break;
            }

            c++;
         }
         if(c==n-1)
         cout<<arr[1]-arr[0]<<endl;
         t--;
    }
}