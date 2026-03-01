#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t>0)
     {
        int n,k,sum1=0,sum=0,c=0,d=0;
        cin>>n>>k;vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);

        }
            for(int i=0;i<n;i++)
            {
            if(b[i]!=-1)
            {sum=a[i]+b[i];c++;
                if(c!=1 && sum!=sum1)
                {cout<<"0"<<endl;c=0;
                    break;
                }
                sum1=sum;
            }
            else
            d++;
        }
           if(d==n)
           {  int min=a[0];int max=a[0];
            for(int i=1;i<n;i++)
            {
                if(a[i]>max)
                max=a[i];
                if(a[i]<min)
                min=a[i];
            }
            if(k+min>=max)
            cout<<(k-(max-min)+1)<<endl;
            else 
            cout<<"0"<<endl;
           }
           if(c>0)
           {
            
            for(int i=0;i<n;i++)
            {
               if(b[i]==-1 && (sum1-a[i]>k || sum1<a[i]))
               {
                  cout<<"0"<<endl;c=0;
                  break;
               }
           }
           if(c!=0)
           cout<<"1"<<endl;
     }
      t--;
     
    }
}