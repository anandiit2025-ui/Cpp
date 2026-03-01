#include<iostream>
#include<vector>
using namespace std;
/*Dutch National Flag algorith used to sort this kind of an array in O(n) time complexity
with single loop to sort and space complexity O(1) */
int main()
{
    vector<int>vec={2,0,1,1,2,0,1,2,0,0};
     int n=vec.size();
  int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(vec[mid]==0)
      {      swap(vec[low],vec[mid]);  mid++; low++; // swap function in c++ swaps two values in array or vector
    }
        else if(vec[mid]==1)
        mid++;

        else //2
        {
            swap(vec[mid],vec[high]);
            high--;
        }


    }
    for(int i=0;i<n;i++)
    cout<<vec[i]<<" ";
}