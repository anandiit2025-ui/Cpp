#include<iostream>
using namespace std;
int main()
{
    int t;int k=0;
    cin>>t;string s,s1;int n;
    while(t>0)
    {k=0;
       cin>>n;
       cin>>s;
       cin>>s1;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(s.at(i)==s1.at(j))
            {
                k++;
               s1.at(j)='4';
               s.at(i)='5';
              
              
            }
            
        }
       }
       if(k==n)
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;
      t--;
    }
    return 0;
}