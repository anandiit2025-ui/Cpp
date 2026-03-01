#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t>0)
    {
        int n,w;
        cin>>n>>w;
         int a=n/w;

        cout<<n-a<<endl;
        t--;
    }
}