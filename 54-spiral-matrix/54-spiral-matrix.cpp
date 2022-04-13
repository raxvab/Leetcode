class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> v;
        int l=0,m=c-1,t=0,b=r-1,d=0;
        while(l<=m&&t<=b)
        {
            if(d==0)
            {
                for(int i=l;i<=m;i++)
                    v.push_back(matrix[t][i]);
                t++;
                
                d=1;
            }else if(d==1)
            {
                             for(int i=t;i<=b;i++)
                    v.push_back(matrix[i][m]);
                m--;
               
                d=2;
            }else if(d==2)
            {
                                for(int i=m;i>=l;i--)
                    v.push_back(matrix[b][i]);
              b--;
                
           d=3;
            }
            else if(d==3)
            {
                                for(int i=b;i>=t;i--)
                    v.push_back(matrix[i][l]);
                l++;
                
                
           d=0;
            }
            
        }
        return v;
    }
};