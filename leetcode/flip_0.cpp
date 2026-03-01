#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int longestOnes(vector<int>& nums, int k) {
    int l=0,r=0;
    int p=0,max=0,x=0;
    vector<int>vec; 
    while(r<nums.size())
    {
        if(nums[r]==0)
        {
            p++;vec.push_back(r);
        }
        
        if(p==k+1)
        { if(r-l>max)
            max=r-l;
             p=k;  l=vec[x]+1;x++;
        }
        if(r==nums.size()-1 && p<=k)
        {
            if(r-l+1>max)
            max=r-l+1;
        }
        r++;
        

    }
    if(vec.size()<=k)
    cout<<nums.size()<<endl;
    else
    cout<<max<<endl;
        
    }
};
int main()
{
    Solution obj;
    vector<int>vec={1,1,1,0,0,0,1,1,1,1,0};
    obj.longestOnes(vec,3);
}