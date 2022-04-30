class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int n = p.size();
       int e=0;
        for(int i = 0; i < n; i++)
      if( p[i]%2 == 0)e++;
           
        
        
        return min(e,n-e);
        
    }
};