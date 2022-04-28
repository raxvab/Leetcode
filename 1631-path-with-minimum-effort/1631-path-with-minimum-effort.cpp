class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
       
        priority_queue<vector<int> , vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> dir={{0,-1},{-1,0},{0,1},{1,0}}; 
        
        int r=heights.size();
        int c= heights[0].size();
        pq.push({0,0,0}); 
        int ans=0;
        while(pq.size())
        {
           auto p=pq.top();
           
            pq.pop(); 
            ans=max(ans,p[0]);
            
            int i=p[1];
            int j=p[2];
            
            
            if(heights[i][j]==-1)
                continue;
            
            if(i==r-1 and j==c-1)
                break;
            
            for(int q=0;q<4;q++)
            {
                int m=i+dir[q][0];
                int n=j+dir[q][1];
                // this fucking line costed me 2 hrs as the expression heights[m][n]==-1 was gonna be checked first which made the vector<vector<int>> value to be negative for being true when out of bound that wasn't fucking possible 
                // ykw the worst part is
                // it's a programming error not implementational
                // shame vaibhav
                if( m==r || n==c||m<0||n<0||heights[m][n]==-1)
                    continue;
            // }
                pq.push({abs(heights[i][j]-heights[m][n]),m,n});
                
            }
            heights[i][j] = -1;
            
        }
    return ans;}
    };