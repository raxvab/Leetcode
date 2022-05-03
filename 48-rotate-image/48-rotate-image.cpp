class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // transpose  + swapping the colomns works here
        // two pointer approach
        
        for(int i=0;i<matrix.size();i++ )
            for(int j=i;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
                
            }
           for(int i=0;i<matrix.size();i++ )
           {
               int left=0,right=matrix[0].size()-1;
               while(left<right)
               {
                   swap(matrix[i][left],matrix[i][right]);  left++;right--;
               }   
              
                  
           }
        
        
    }
};