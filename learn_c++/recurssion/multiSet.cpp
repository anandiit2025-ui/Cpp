#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
   unordered_set<int>s; vector<int>ans;int expsum=0,b=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {expsum+=grid[i][j];
        if(s.find(grid[i][j])!=s.end())
        {  ans.push_back(grid[i][j]);

        }
        s.insert(grid[i][j]);
    }
   }
   b=(n*n*(n*n+1))/2-(expsum-ans[0]);cout<<b<<endl;cout<<expsum<<endl; cout<<ans[0]<<endl;
   ans.push_back(b);
return ans;
}
};
int main()
{
    Solution obj;
    vector<vector<int>>grid={{1,3},{2,2}};
    obj.findMissingAndRepeatedValues(grid);
    return 0;
}
