#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {int n=0,k=0;
    int length;
    cin>>length;
    int arr[length];
    for(int i=0;i<length;i++)
   { cin>>arr[i];
    if(arr[i]==0)
     n++;
     if(arr[i]<0)
     k++;

  }
  if(k%2==1)
  n=n+2;
 
  cout<<n<<endl;
t--;
}}