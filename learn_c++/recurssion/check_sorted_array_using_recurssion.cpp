#include<iostream>
#include<vector>
using namespace std;
bool IsSortedInAscending(vector<int>vec,int n)
{
    if(n==1 || n==0)
    return true;

     return vec[n-1]>=vec[n-2]&& IsSortedInAscending(vec,n-1);

}
int main()
{
    vector<int>vec={1};
    bool l=IsSortedInAscending(vec,vec.size());
    cout<<l<<endl;
    return 0;
}