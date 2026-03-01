  #include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0){
        int n;
        cin>>n;
        string s[n];int a,b,c=0;
        string st="";
        for(int i=0;i<n;i++)
        cin>>s[i];
        if(n>0)
        {
        st=s[0];
        }
        for(int i=1;i<n;i++)
        {
          
            if((s[i]+st)<(st+s[i]))
            st=s[i]+st;
            
            else
            st=st+s[i];
            
          }
          
        cout<<st<<endl;
        t--;
     }
    }