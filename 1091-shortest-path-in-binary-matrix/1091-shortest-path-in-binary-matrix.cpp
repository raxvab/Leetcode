class Solution
{
    public:
        bool check(int i, int j, vector<vector < int>> &grid, int m, int n)
        {
            if (i >= 0 && j >= 0 && i <= m && j <= n && grid[i][j] == 0)
            {
                return true;
            }
            return false;
        }
    int shortestPathBinaryMatrix(vector<vector < int>> &grid)
    {

        if (grid[0][0] == 1)
        {
            return -1;
        }
        vector<vector < int>> d = {
		{ -1, -1 },
            { -1,
                0 },
            { -1,
                1 },
            { 0,
                -1 },
            { 0,
                1 },
            { 1,
                -1 },
            { 1,
                0 },
            { 1,
                1 }
        };
        queue<pair<int, int>> q;
        q.push({ 0,
            0 });
        grid[0][0] = 1;
        int ans = 0;
        int m = grid.size() - 1;
        int n = grid[0].size() - 1;
        while (!q.empty())
        {
            int n1 = q.size();
            ans++;

            for (int i = 0; i < n1; i++)
            {
                pair<int, int> p = q.front();
                q.pop();
                if (p.first == m && p.second == n)
                {
                    return ans;
                }
                for (int j = 0; j < d.size(); j++)
                {
                    int  r = p.first + d[j][0];
                    int c = p.second + d[j][1];

                    if (check(r, c, grid, m, n))
                    {
                        q.push({ r,
                            c });
                        grid[r][c]=1;
                        
                    }
                }
            }
        }
        return -1;
    }
};