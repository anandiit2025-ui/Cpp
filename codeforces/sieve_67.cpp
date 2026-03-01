#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t){
    int n;
    cin>>n;
    vector<int>vec;int c=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        if(vec[i]==67)
        c++;
    
    }
    if(c>0 )
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    t--;
}

}