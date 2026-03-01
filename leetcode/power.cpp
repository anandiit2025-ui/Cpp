#include<bits/stdc++.h>
using namespace std;
class Solution {
public: int i=0; double y;
    double myPow(double x, int n) {
        if(i==0)
        {y=x; i++;
        }
        if(n==1)
        { 
            return x;

        }

        if(n<0)
        { x=1/x; y=x;
            n=-n;
        }
        if(n>0)
        {  
             return myPow(x*y,n-1);
        }
        else
        { 
        return x;
        }
  
    }
};
int main()
{
    double x=2.10;
    Solution ob;
    double y=ob.myPow(x,-2);
    printf("%lf",y);
}