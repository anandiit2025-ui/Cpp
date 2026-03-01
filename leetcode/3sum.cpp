#include<algorithm>
#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public: int a=0;
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
          vector<vector<int>>vec;
        for(int i=0;i<n-2;i++)
        {
            for(int j=n-1;j>i+1 ;j--)
            {
               for(int k=j-1;k>i;k--)
               {
               
                if(nums[j]+nums[k]+nums[i]==0)
                { 
                    vec.push_back({nums[i],nums[k],nums[j]});
                    a++;break;
                }
               }
            }
        }
        set<vector<int>>s;
        for(auto x :vec) s.insert(x);
        vec.clear();
        for(auto x:s)vec.push_back(x);

        return vec;


    }
        
    
};
int main()
{Solution obj;
    vector<int>nums={2,-3,0,-2,-5,-5,-4,1,2,-2,2,0,2,-4,5,5,-10};
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

