#include<bits/stdc++.h>
using namespace std;
// slow and fast pointer approach thinking array to be like a linked list
class Solution {
public:
        int findDuplicate(vector<int>& arr) {
            int slow=arr[0],fast=arr[0];
            do{
                slow=arr[slow];//+1
                fast=arr[arr[fast]];//+2
             } while(slow!=fast) ;
             slow=arr[0];
            while(slow!=fast)
            {
            slow=arr[slow];
            fast=arr[fast];
            }
            return slow;
        
    }
};
int main()
{
    Solution obj;vector<int>vec={1,3,4,2,2};
    cout<<obj.findDuplicate(vec)<<endl;
    return 0;
}