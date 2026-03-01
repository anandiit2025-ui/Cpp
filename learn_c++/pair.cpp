#include<bits/stdc++.h>
using namespace std;
void ExplainPairs()
{
    pair<int,int>p={1,5};
    cout<<p.first<<" " <<p.second<<endl;// p.first gives first elementi.e, 1  and p.second gives second element i.e, 5
    pair<int , pair<int,int>>p1={1,{3,4}};
    cout<<p1.first< <" "<<p1.second.first<<" "<<p1.second.second<<endl;//p1.second.second gives value of second element of econd member of pair p1
pair<int,int>arr[]={{1,2},{3,4},{2,5}};
cout<<arr[1].second<<endl;

vector<pair<int,int>>vec;
vec.push_back({7,8});
cout<<vec[0].first<< " "<<vec[0].second<<endl;
vec.emplace_back(7,8);
cout<<vec[1].first<< " "<<vec[1].second<<endl;
}
int main()
{
    ExplainPairs();
    return 0;
}