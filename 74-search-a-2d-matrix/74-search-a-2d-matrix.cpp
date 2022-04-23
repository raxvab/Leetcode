class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // bool flag=false;
        int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        
        
        int i=0,j=col;
        while(i<=row&&j>=0)
        {
            
        if(matrix[i][j]==target)
            return true;
        else if(matrix[i][j]<target)
            i++;
            else j--;
            
            }
       return false;
        
        
    }
};