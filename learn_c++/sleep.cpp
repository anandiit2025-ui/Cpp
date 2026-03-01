#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t; int n,k,p,i; string num;
    while(t>0)
    {p=0;
        cin>>n;
        cin>>k;
        cin>>num;
        for(i=0;i<n;i++)
        {
            
            if(num.at(i)=='1')
            {
                p++;
                for(int j=0;j<k && i<n-1;j++)
                {
                    if(num.at(i+1)=='1')
                    {
                        j=-1;
                    }
                    p++;i++;
                }
            }
        }
        cout<<(n-p)<<endl;
       
        t--;}
        return 0;
    }
    
          