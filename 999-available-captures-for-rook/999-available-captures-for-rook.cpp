class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        
        int ans=0,ri=-1,rj=-1;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                ri=i,rj=j,i=9,j=9;
            }
        }
        
        
        //left
        for(int j=rj;j>=0;j--)
            {
                if(board[ri][j]=='p')
               ans++,j=-1;
            else if(board[ri][j]=='B')
                j=-1;
            
            }
        //right
          for(int j=rj;j<8;j++)
            {
                if(board[ri][j]=='p')
               ans++,j=9;
            else if(board[ri][j]=='B')
                j=9;
            
            }
        
        //up
       
        for(int i=ri;i>=0;i--)
            {
                if(board[i][rj]=='p')
               ans++,i=-1;
            else if(board[i][rj]=='B')
                i=-1;
            
            }
        //down
          for(int i=ri;i<8;i++)
            {
                if(board[i][rj]=='p')
               ans++,i=9;
            else if(board[i][rj]=='B')
                i=9;
            
            }
        
        return ans;
        
        
        
    }
};