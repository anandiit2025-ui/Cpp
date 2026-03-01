#include<iostream>
using namespace std;
int main()
{int sum=0,sum1=0;
    int arr[7]={3,5,-4,4,-1,7,-8};
    for(int start =0;start <7;start ++)
    {sum=0;
        for(int end=start ; end<7;end++)
        {
            sum+=arr[end];
            if(sum<0)
            {
                break;
            }
           
            if(sum>sum1)
            {
                sum1=sum;
            }
        }
    }
    cout<<sum1<<endl;
    return 0;
}