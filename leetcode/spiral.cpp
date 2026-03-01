#include<iostream>
#include<vector>
using namespace std;
 vector<vector<int>> generateMatrix(int n) {
     int k=1;
      vector<vector<int>>vec(n,vector<int>(n,0));
    int a=0,c=n;
    
    
    while(a<c)
    {
        for(int j=a;j<c;j++)
         {
            vec[a][j]=k;
            
            k++;
         }

        a++;c--;

        for(int i=a;i<=c;i++)
    {        vec[i][c]=k;
            k++;
        }

        for(int j=c-1;j>=a-1;j--)
          {
            vec[c][j]=k;
        
            k++;
         }


        for(int i=c-1;i>=a;i--)
          {
            vec[i][a-1]=k;
             
            k++;
         }



        }
    return vec;
}
int main()
{
    int n=5;
    vector<vector<int>>result=generateMatrix(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}