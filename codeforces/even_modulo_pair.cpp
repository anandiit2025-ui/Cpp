#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t; int n,a=0;
    while(t>0)
    { a=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((arr[j]%arr[i])%2==0)
                 {cout<<arr[i]<<" "<<arr[j]<<endl;a=1;
                    break;
                 }
            }
             if(a==1)
             break;

        }
        if(a!=1)
        cout<<"-1"<<endl;
        t--;
    }
    return 0;

}