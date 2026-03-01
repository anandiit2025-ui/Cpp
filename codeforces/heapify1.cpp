#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector<int>vec;
        vec.push_back(0);int c=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
       
        for(int i=3;i<=n;i++)
        {

            if(i&(i-1)!=0)
            {
                if(vec[i]!=i)
                {
                    c++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        
        }
    
            if(c==0)
            {
                cout<<"YES"<<endl;
            }

        t--;
    }
}