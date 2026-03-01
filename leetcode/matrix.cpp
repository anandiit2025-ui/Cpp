#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n; int arr[n][n];int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=k;
            k++;
        }
    } 
    
    
    int a=0,c=n;
    while(a<c)
    {
        for(int j=a;j<c;j++)
        cout<<arr[a][j]<<" ";

        a++;c--;

        for(int i=a;i<=c;i++)
        cout<<arr[i][c]<<" ";

        for(int j=c-1;j>=a-1;j--)
        cout<<arr[c][j]<<" ";

        for(int i=c-1;i>=a;i--)
        cout<<arr[i][a-1]<<" ";


    }
    return 0;
     

}