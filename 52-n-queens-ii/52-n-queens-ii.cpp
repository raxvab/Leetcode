class Solution
{
    public:

//         bool issafe(int row, int col, vector<string> & board, int n)
//         {
//             int r = row, c = col;

//             while (row >= 0 && col >= 0)
//             {
//                 if (board[row][col] == 'Q')
//                     return false;
//                 row--;
//                 col--;
//             }

//             col = c;
//             row = r;
//             while (col >= 0)
//             {
//                 if (board[row][col] == 'Q')
//                     return false;
//                 col--;
//             }

//             row = r;
//             col = c;
//             while (row < n && col >= 0)
//             {
//                 if (board[row][col] == 'Q')
//                     return false;
//                 row++;
//                 col--;
//             }
//             return true;
//         }
// public:
    
    
    void solve(int col, vector < string > & board, set<vector < string > > & ans,
               vector<int> & LeftRow,
               vector<int> & UpperDiagonal,
               vector <int> & LowerDiagonal,
               
               int n)
    {
        if (col == n)
        {
            ans.insert(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (LeftRow[row]==0 and LowerDiagonal[row+col]==0 and UpperDiagonal[n-1 + col-row]==0)
            {
                board[row][col] = 'Q';
      LeftRow[row]=1;
                      LowerDiagonal[row+col]=1;
                      UpperDiagonal[col-row+n-1]=1;

                      solve(col+1, board, ans,LeftRow,UpperDiagonal,LowerDiagonal, n);
  // solve(col + 1, board, ans, n);
                board[row][col] = '.';

      LeftRow[row]=0;
                     LowerDiagonal[row+col]=0;
                      UpperDiagonal[col-row+n-1]=0;
            }
        }
    }
   int totalNQueens(int n)
    {

        vector < string > board(n);
      set <vector< string > > ans;
        string s(n, '.');

        for (int i = 0; i < n; i++)
            board[i] = s;
       	// i=s;
vector<int> LeftRow(n,0);
               vector<int> UpperDiagonal(2*n-1,0);
               vector <int> LowerDiagonal(2*n-1,0);
               
        solve(0, board, ans,LeftRow,UpperDiagonal,LowerDiagonal, n);

        return ans.size();
    }
};