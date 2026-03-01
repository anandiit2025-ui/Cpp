#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
         vector<int> twoSum(vector<int>&nums , int target){
          int a=0;
             for(int i=0;i<nums.size();i++)
             {if(nums.at(i)>target)
              continue;
              for(int j=i+1;j<nums.size();j++)
              {
                if(nums.at(i)+nums.at(j)==target)
                {
                cout<<nums.at(i)<<"\n"<<nums.at(j)<<endl;a=1;
                break;
                }
              }
              if(a==1)
              break;
              }
           }
};
