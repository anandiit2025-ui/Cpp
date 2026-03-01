#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();int c=0;vector<int>a;int b=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {c++;a.push_back(i);
            }
        }
        if(c==0)
        return true;
        else
        {
            while(c!=0)
            {k=0;
            for(int i=0;i<a[b];i++)
            {
                if(nums[i]>a[b]-i)
                {  b++;c--;
                    break;

                }
                else
                k++;

            }
            if(k==a[b])
            {return false;
            }

            }
        }
        return true;
        
    }
};
int main()
{
    vector<int>vec={3,4,0,0,4};
    Solution obj;
    cout<<obj.canJump(vec)<<endl;
    return 0;

}
