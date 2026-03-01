#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;
    while(t>0)
    {

        double k,x;
        cin>>k>>x;
        for(int i=x+1;;i++)
        {
            if(ceil(i/x)>k)
            {
                cout<<i<<endl;
                break;
            }

        }


        t--;
    }
}