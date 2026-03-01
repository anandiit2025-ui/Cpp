#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;int t,k;
    cin>>t;
    while(t>0)
    {
    cin>>n;  
    cin>>s;
    if(n<4)
    {
        cout<<"0"<<endl;
        t--;
        continue;
    }
    char ch;
     k=0;
     for(int i=0;i<n;i++)
     {   if(i+3<n){
        if(s[i]==s[i+2] && s[i+1]==s[i+3] && s[i+1]!=s[i+2])
        {
            ch=s[i+1];
            s[i+1]=s[i+2];
            s[i+2]=ch;k++;
            i++;
        }}
        if(i+2==n-1)
        {
            if(s[i]==s[i+2] && s[i]!=s[i+1])
            {
            k++; ch=s[i+1];
            s[i+1]=s[i+2];
            s[i+2]=ch;
            i++;
            }

        }

    }

    cout<<k<<endl;
    

     

    
    t--;
}
 
}