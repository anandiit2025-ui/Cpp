#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec={1,2,3,4,5};
    cout<<"Size ="<<vec.size()<<endl;//prints size of vector
    vector<int>ve;
    ve.push_back(10);//inserts 1 element as 10 as last element of ve vector. shuru me ve vector me ek bhi element nhintha par ab ek h. 
     ve.push_back(35);
     ve.push_back(45);
     cout<<"after push back ="<<ve.size()<<endl;
     for(int val:ve)
     {
        cout<<val<<endl;
     }
     // pop_back function deletes the last element of vector
     ve.pop_back();
     cout<<"after pop back ="<<ve.size()<<endl;
     for(int val:ve)
     {
        cout<<val<<endl;
     }
     //front function prints first element of vector
     //back function prints last element of vector
     cout<<ve.front()<<endl;
     cout<<ve.back()<<endl;

     //at fuction gives value of vector element at a given position
     cout<<ve.at(0)<<endl;


}