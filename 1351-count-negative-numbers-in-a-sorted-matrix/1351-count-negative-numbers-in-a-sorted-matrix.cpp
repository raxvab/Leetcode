class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=c-1;j>=0;j--)
                if(grid[i][j]<0)
                    ans++;
            else
                break;
        }
        
        return ans;
    }
};