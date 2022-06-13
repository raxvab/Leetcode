vector<vector<int>> dp(200,vector<int>(200,-1));

class Solution {
public:
    
    
    int solve(vector<vector<int>> &v,int i,int j)
    {
        if(i==v.size()) return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int ans=solve(v,i+1,j);

        if(j<i+1) ans=min(ans,solve(v,i+1,j+1));
        
        return dp[i][j]=ans+v[i][j];

    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
        for(int z=0;z<200;z++)
        {
            for(int y=0;y<200;y++)
            {
                dp[z][y]=-1;
            }
        }
        
        return solve(triangle,0,0);
        
    }
};