#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s; 
        int l=0,r=n-1; int x=0; vector<int>vec,arr;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0' && s[i+1]=='0')
            continue;
            else if(s[i]=='1' && ( s[i+1]=='0'))
            {x++; break;}

            
        }
        if(x==0)
        cout<<"Bob"<<endl;
        else{
        while(l<r)
        {
            if(s[l]=='1' && s[r]=='0')
            {
                
                vec.push_back(l);
                arr.push_back(r);
                l++;
                r--;
            }
            else if(s[l]=='1' &&  s[r]=='1')
            r--;
            else if(s[l]=='0'&& s[r]=='0')
            l++;
            else 
            {
                l++;r--;
            }
        }
        cout<<"Alice"<<endl;
        cout<<vec.size()+arr.size()<<endl;
        for(int i=0;i<vec.size();i++)
        cout<<vec[i]+1<<" ";
         for(int i=arr.size()-1;i>=0;i--)
        cout<<arr[i]+1<<" ";
        cout<<endl;
    }
        
        
         t--;

        
    }
}