class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> r(grid.size(),0),cols(grid[0].size(),0);	
        for(int i=0;i<grid.size();i++)					
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j])
                    r[i]++,cols[j]++;
        int count=0;
        for(int i=0;i<grid.size();i++)			
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]&&(cols[j]>1||r[i]>1))	
                    count++;
        return count;

    }
};