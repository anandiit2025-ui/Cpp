#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t>0)
    {  k=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==0 || arr[i]==0)
                {
                    continue;
                }
                if(arr[i]>arr[j])
                {k++;arr[j]=0;
                
                }

            }
        }
        cout<<k<<endl;
        t--;
    }
}