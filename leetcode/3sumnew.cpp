#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public: 
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.size()<3)
        return {};
        if(nums[0]>0)
        return {};
        int start =0,end=n-1,mid;int k=0;
          vector<vector<int>>vec; set<vector<int>>s;
        for(int i=0;i<n-2;i++)
        {
            
           for(int j=n-1;j>i+1 ;j--)
            {
               start=i+1;end=j;
               k=nums[i]+nums[j];
            while(start<=end)
            {  mid=start+(end-start)/2;
                if(nums[mid]==-k && j!=mid )
                { 
                    s.insert({nums[i],nums[mid],nums[j]});
                    break;
                }
                else if(nums[mid]>-k)
                end=mid-1;
                else
                start=mid+1;
               
               }}}
         for(auto x:s)vec.push_back(x);
        return vec;

    }
    
};

int main()
{Solution obj;
    vector<int>nums={0,0,0,0};
    int n=nums.size();
    vector<vector<int>>vec(n,vector<int>(3,0));
    vec=obj.threeSum(nums);
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<3;j++)
        cout<<vec[i][j]<<" ";
        cout<<endl;
    }


    
}

