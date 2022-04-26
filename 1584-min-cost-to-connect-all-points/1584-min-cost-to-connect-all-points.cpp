class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n=points.size();
    int cost=0;
        vector<int> dist(n,INT_MAX);
        vector<bool> vis(n,false);
        dist[0]=0;
        
        for(int i=0;i<n;i++)
        {
            int min1=INT_MAX;
            int cur=INT_MIN;
            for(int j=0;j<n;j++)
            {
                if(vis[j]==false and min1>dist[j])
                    min1=dist[j],  cur=j;
            
            
            }
            
            
    cost+=min1;
        vis[cur]=true;
            for(int j=0;j<n;j++)
            {
                int d=abs(points[cur][0]-points[j][0])+abs(points[cur][1]-points[j][1]);
                if(d<dist[j] and vis[j]==false)
                    dist[j]=d;
                
            }
            
    
        }
    return cost;
    
    
    
    }
};