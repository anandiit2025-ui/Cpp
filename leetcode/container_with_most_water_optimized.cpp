#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0,currarea=0;int n=height.size();int left=0,right=n-1;
        while(left<right)
        {  currarea=min(height[left],height[right])*(right-left);
         
            if(height[left]<height[right])
            {
                left++;

            }
            else if(height[left]>height[right])
            right--;
            else
            {
                right--;left++;
            }
            if(currarea>maxarea)
            maxarea=currarea;
        }
        return maxarea ;

    }
};
int main()
{
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    Solution obj;
    cout<<obj.maxArea(vec);
    return 0;

}
