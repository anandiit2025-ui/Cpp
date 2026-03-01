#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        int c=0;int a=1,d=0,p=0;
        if(vec[0]==0)
        c=1;
        while(a!=n)
        {  
            
                if(c==vec[a])
                c++;
            d=vec[a];
            if(d>0)
            d=0;
            else
            { d=1;
                 for(int k=a+1;k<n;k++)
                 {
                    if(vec[k]==d)
                     {d++;
                     }
                     
                 }
           
            }
            if(d==c)
            {
                cout<<"NO"<<endl;p=0;
                break;
            }
            else
            {
               p++;
            }
            a++;
        }
        if(p!=0)
        cout<<"YES"<<endl;
        t--;
        

    }
}