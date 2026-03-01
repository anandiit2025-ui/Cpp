#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;  int n; int j, a;
    while(t>0)
    {a=1;j=2;
         cin>>n;
        int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(j!=0)
    {
      for(int i=0;i<n;i++)
      {a=1;
        if(j==2 && arr[i]%2==1)
        {
            a=2;j=-1;break;
        }

         for(int k=2;k<=j;k++)
         {
            if(arr[i]%k==0 && j%k==0)
           { a=0;break;
           }
           
           
         }if(a!=0 && j!=2)
         {
            a=j;j=-1;break;
         }
      }j++;

    }t--;
    cout<<a<<endl;
    
}
return 0;}