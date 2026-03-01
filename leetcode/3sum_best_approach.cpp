#include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.size()<3)
        return {};
        vector<vector<int>>vec;
        if(nums[0]>0)
        return {};int j=0,k;
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
          j=i+1;k=n-1;
          while(j<k)
          {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0)
            j++;
            else if(sum>0)
            k--;
            else{
                 
            vec.push_back({nums[i],nums[j],nums[k]});
            j++;k--;
            while(j<k && nums[j]==nums[j-1])
            j++; 
           

          }}
        }
        return vec;

    }};
    int main()
{Solution obj;
    vector<int>nums={-1,0,1,2,-1,-4};
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
