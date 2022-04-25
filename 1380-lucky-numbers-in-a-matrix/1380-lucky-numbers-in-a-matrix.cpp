class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int r=matrix.size();
                int c=matrix[0].size();
vector<int>v;
        int maxo=INT_MIN;
        for(int i=0;i<r;i++)
{
    int minr=INT_MAX;
    for(int j=0;j<c;j++)
    {
if(matrix[i][j]<minr)
        minr=matrix[i][j];
    
    }
            maxo=max(maxo,minr);
             
}
        
               int mino=INT_MAX; 
       for(int j=0;j<c;j++) 
{
    int maxc=INT_MIN;
    for(int i=0;i<r;i++)
    {
maxc=max(maxc,matrix[i][j]);
    
    }
           mino=min(maxc,mino);
          
}
        if(mino==maxo)
        return {mino};
        else
            return {};
    }
};