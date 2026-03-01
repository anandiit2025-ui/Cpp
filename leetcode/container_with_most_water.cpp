#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max3=0,max1=0,max2=0;int n=height.size();
        for(int i=0;i<n;i++)
        {  
           for(int j=n-1;j>i;j--)
           {  max3=max1=0;
              if(height[j]>=height[i])
              {
                max3=height[i]*(j-i);
            
                break;
              }
           }
           for(int k=0;k<i;k++)
           {
            if(height[k]>=height[i])
            {
                max1=height[i]*(i-k);
                 
                break;
            }
           }
            if(max1>max2 || max3>max2)
           max2=max(max1,max3);
          
           
          
        }
        cout<<max2<<endl;
    
        
    }
};

int main()
{
    vector<int>vec={0,2};
    Solution obj;
    obj.maxArea(vec);
    return 0;

}
