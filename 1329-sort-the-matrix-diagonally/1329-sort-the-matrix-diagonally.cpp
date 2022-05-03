class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        unordered_map<int,vector<int>> m;
         for(int i=0;i<mat.size();i++)
        { int j;
            for( j=mat[0].size()-1;j>=0;j--)
            {
                m[i-j].push_back(mat[i][j]);
            
            }
             sort(m[i-j].begin(),m[i-j].end());
        
        }
            int m1=mat.size();
    int n=mat[0].size();
    
         for(int k=-(n-1);k<m1;k++) {
        sort(m[k].begin(),m[k].end());
    }
        
        
      
        for(int i=m1-1;i>=0;i--) {
        for(int j=n-1;j>=0;j--) {
            mat[i][j]=m[i-j].back();
            m[i-j].pop_back();
        }
    }
    return mat;
        
        
        
        
      
    }
};