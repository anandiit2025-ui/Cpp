#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter maximum element of array"<<endl;
    int n; int a=1,b=0;
     cin>>n;
    int arr[n*(n+1)/2];
    while(a<=n)
    {
    for(int i=1;i<=a;i++)
    {
       arr[b]=i;
        b++;
    }
    a++;
}
   
    cout<<"Enter the  length of array"<<endl;
    int l;
    cin>>l;
    cout<<"Enter the subarray which you want to get"<<endl;
   int vec[l];
    for (int i=0;i<l;i++)
    {
        cin>>vec[i];
    }
    a=1;b=0;
 for(int i=0;i<(n*(n+1))/2;i++)
 {
    if(arr[i]==vec[0])
    {
        a=1;
    for(int k=1;k<l;k++)
        {
            if(arr[i+k]==vec[k])
            {
            a++;
            }
            else 
            break;

        }if(a==l)
        {
        b++;
     i=i+a-1;}
    }
}
cout<<b<<endl;

 }

    
