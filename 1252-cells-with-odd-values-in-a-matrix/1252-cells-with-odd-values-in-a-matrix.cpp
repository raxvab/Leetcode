class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        
         vector<bool> v1(n, false);
         vector<bool> v2(m, false);
    
        for(int i=0;i<indices.size();i++)
        {
                        v1[indices[i][0]]=v1[indices[i][0]]^true;
v2[indices[i][1]]=v2[indices[i][1]]^true;
                      
        }
        
        int r = 0;
        int c=0;
        
        for(int i=0; i<n; i++) {
            if(v1[i])
                ++r;
        }
        
        for(int j=0; j<m; j++) {
            if(v2[j])
                c++;
        }
        cout<<r<<" "<<m<<" "<<c<<" "<<n;
        return  r*m + c*n - 2*r*c;
        
    }
};