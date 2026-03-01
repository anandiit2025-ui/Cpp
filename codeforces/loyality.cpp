#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {
        long long x;int n; long long y=0,z=0;
       cin>>n>>x;
       vector<int>vec,arr;
       for(int i=0;i<n;i++)
         {
            int a;
            cin>>a;
            vec.push_back(a);
         }
       sort(vec.begin(),vec.end());
       int j=n-1;int a=0,b=0; 
       while(a<vec.size())
       {
          if(y+vec[b]<x)
          {
            y+=vec[b];arr.push_back(vec[b]);b++;a++;
          }
          
          else
          {
            while(y+vec[j]>=x && j>=b)
            {z+=vec[j];arr.push_back(vec[j]);
                
                y+=vec[j]-x;j--;a++;}
                
          }
          
          
       }
        cout<<z<<endl;
       for(int val:arr)
       cout<<val<<" ";
       cout<<endl;
      
        t--;
     }
    }
