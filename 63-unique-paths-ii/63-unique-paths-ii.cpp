class Solution {
public:
    int dp[101][101];
    int recur(vector<vector<int>>&a,int x,int y,int row,int col){
        if(x==row-1 && y==col-1)
              return dp[x][y] = 1;
        if(x<0 || x>=row || y<0 || y>=col)
            return 0;
        if(a[x][y]==1)
            return 0;
        if(dp[x][y]!=-1)
            return dp[x][y];
        int g = recur(a,x+1,y,row,col);
        int h = recur(a,x,y+1,row,col);
        
        
        return dp[x][y] =  g+h;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        
      int row =   a.size();
        int col = a[0].size();
        memset(dp,-1,sizeof(dp));
        if(a[row-1][col-1]==1)
            return 0;
        return recur(a,0,0,row,col);
    }
};