class Solution {
public:
   
    
    void gameOfLife(vector<vector<int>>& a) {
        int n=a.size();
        int m= a[0].size();
      
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                 int sum=0;

                ////////////////////////////////////////
                if(i>0 and a[i-1][j]>=1) sum++;
                if(i<n-1 and a[i+1][j]>=1) sum++;
               if(j>0 and a[i][j-1]>=1) sum++; 
                if(j<m-1 and a[i][j+1]>=1) sum++;
                ///////////////////////////////////////////
                
                if(i>0 and j>0 and a[i-1][j-1]>=1) sum++; 
                if(i>0 and j<m-1 and a[i-1][j+1]>=1) sum++; 
                if(i<n-1 and j>0 and a[i+1][j-1]>=1) sum++; 
                if(i<n-1 and j<m-1 and a[i+1][j+1]>=1) sum++; 
                if(a[i][j]==1 and (sum<2||sum>3)) a[i][j]=2;
                if(a[i][j]==0 and sum==3 ) a[i][j]=-1;
                
            }
        
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==2) a[i][j]=0;
                if(a[i][j]==-1) a[i][j]=1;
            }
        }
                        return;

    }
};