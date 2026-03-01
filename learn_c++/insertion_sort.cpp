#include<iostream>
using namespace std;
int main()
{
    int arr[] ={4,1,5,2,3};
    int prev,curr;
    for(int i=1;i<5;i++)
    {prev=i-1;
       curr=arr[i];
        
             while(arr[prev]>curr && prev>=0)
        {   
            arr[prev+1]=arr[prev];
            prev--; 
        }
        arr[prev+1]=curr;
    
}
for(int i=0;i<5;i++)
cout<<arr[i]<<"\n"<<endl;
return 0;

}