#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; int n;
    cin>>t;
    while(t>0)
    {
        cin>>n;int a=1;
        vector<int>vec,arr;
        for(int i=1;i<=n;i++)
        {
             if(i%2==1)
             vec.push_back(n-a+1);
             else{
             vec.push_back(a);a++;}
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        t--;


    }
}