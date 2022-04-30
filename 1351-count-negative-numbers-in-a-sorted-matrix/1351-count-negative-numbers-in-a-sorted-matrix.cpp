class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
      
        int ans=0;
        //   int r=grid.size();
        // int c=grid[0].size();
        // for(int i=0;i<r;i++)
        // {
        //     for(int j=c-1;j>=0;j--)
        //         if(grid[i][j]<0)
        //             ans++;
        //     else
        //         break;
        // }
        
        // 2nd approach
        int m(grid.size()), n(grid[0].size()), r(0), c(n - 1);
        while (r < m) {
            while (c >= 0 && grid[r][c] < 0) c--;
            ans += n - c - 1;
            r++;
        }
        return ans;
        
        //return ans;
    }
};