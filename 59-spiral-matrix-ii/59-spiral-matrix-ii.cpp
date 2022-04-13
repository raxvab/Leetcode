class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      
vector<vector<int>> v(n, vector<int>(n));
   // int v[n][n];
        int r=n;
        int c=n;
       
        int l=0,m=c-1,t=0,b=r-1,d=0;
           int num=1;
        while(l<=m&&t<=b)
        {
            if(d==0)
            {
                for(int i=l;i<=m;i++)
                    v[t][i]=num,num++;
                t++;
                d=1;
            }else if(d==1)
            {
                             for(int i=t;i<=b;i++)
              v[i][m]=num,num++;
               
                m--;
               
                d=2;
            }else if(d==2)
            {
                                for(int i=m;i>=l;i--)
                    // v.push_back(matrix[b][i]); 
                v[b][i]=num,num++;
              b--;
                
           d=3;
            }
            else if(d==3)
            {
                                for(int i=b;i>=t;i--)
                    v[i][l]=num,num++;
                l++;
                
                
           d=0;
            }
            
        }
//         vector<vector<int>> q;
        
//         for(int i=0;i<n;i++)
//             for(int j=0;j<n;j++)
//                 q
        return v;

        
        
    }
};