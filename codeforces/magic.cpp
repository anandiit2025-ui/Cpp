#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t)
{
    int n;
    cin>>n;
    vector<int>vec;int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        if(vec[i]&1)
        c++;
        else
        d++;
    }
    if(c==n || d==n)
    {
        for(int x:vec)
        cout<<x<<" ";
        cout<<endl;
        t--;
        continue;
    }
    else
    {
        sort(vec.begin(),vec.end());
          for(int x:vec)
        cout<<x<<" ";
        cout<<endl;
    }
    t--;

    
}
}

