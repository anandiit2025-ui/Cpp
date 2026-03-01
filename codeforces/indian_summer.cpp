#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>vec,arr; unordered_set<string>l;
     for(int i=0;i<n;i++)
     {  string s,p;
            cin>>s;
            cin>>p;
            vec.push_back(s+" "+p);
     }
  int c=0;
     for(int i=0;i<n;i++)
     {
        
        if(l.find(vec[i])==l.end())
        {  l.insert(vec[i]);
            c++;
           
        }
       

        }
       
     
     cout<<c<<endl;

}