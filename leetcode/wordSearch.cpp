#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int m=board.size();
        int n=board[0].size();
        int l,a,b,c,d;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            { 
                if(board[i][j]==word[0])
            { a=i;b=j;l=1; c=m,d=n;
                
            while(l<word.size())
            {
            if(a<m-1 && board[a+1][b]==word[l]  && c!=a+1)
            a++; 
            else if(a>0 && board[a-1][b]==word[l]  && c!=a-1)
            a--;
            else if(b<n-1 && board[a][b+1] == word[l]&&  d!=b+1)
            b++;
            else if(b>0 && board[a][b-1]==word[l]&& d!=b-1)
            b--;
            else
            break;
            l++; c=a;d=b;
          
            
            
            
            } cout<<l<<endl;
            if(l==word.size())
            return true;
        }
            }
        }
        return false;

        
    }
};
int main()
{
    vector<vector<char>> bs={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABCB";
    Solution obj;
    cout<<obj.exist(bs,word);
    return 0;
    
}