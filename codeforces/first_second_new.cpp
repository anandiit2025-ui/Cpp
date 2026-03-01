#include<bits/stdc++.h>
using namespace std;
int sum=0;
void sum_max(vector<int> &vec,int first,int second,vector<int> &v)
{   
    
    if(second==vec.size())
    {
    v.push_back(sum);cout<<sum<<endl;
    
     return;
} 
    sum+=vec[first];
    
    sum_max(vec,second,second+1,v);
    sum-=vec[first];
    sum-=vec[second];

     sum_max(vec,second,vec.size(),v);
}
int main()
{
    vector<int>vec={-2,-3,4,10,-9};
    vector<int>v;
    sum_max(vec,0,1,v);int s=0;
    for(int i=0;i<v.size();i++)
    {
        if(s<v[i])
        s=v[i];
    }
    cout<<s<<endl;
    
    
    return 0;

}