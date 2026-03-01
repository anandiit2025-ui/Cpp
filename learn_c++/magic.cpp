#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t; int n; int k;int swap;
    while(t>0)
    {k=0;swap=0;
       cin>>n;int arr[n];
       for(int i=0;i<n;i++)
      {

       cin>>arr[i];
       if(arr[i]%2==0)
       k++;
      }
      if(k==n || k==0)
      {
         for(int i=0;i<n;i++)
      
        cout<<arr[i]<<" ";
      
      }
      else
      {

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    swap=arr[i];
                    arr[i]=arr[j];
                    arr[j]=swap;
                }
            }
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
      }cout<<endl;
      t--;



    }}