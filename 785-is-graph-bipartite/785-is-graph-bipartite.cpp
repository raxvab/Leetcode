class Solution {
public:
    int vis[100001]={0};
    int col[100001];
    bool dfs(int node,int color,vector<vector<int>>&graph)
    {
        
        vis[node]=1;
        col[node]=color;
        
        for(int child: graph[node])
        {
            if(vis[child]==0)
            {
                if(dfs(child,color^1,graph)==false)
                    return false;
                
            }
            else if(col[node]==col[child])
                return false;
        }
        return true;
        
        
    }
    
    
    
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        bool flag;
        for(int i=0;i<graph.size();i++)
            if(vis[i]==0&&dfs(i,0,graph)==false)
        // flag=dfs(0,1,graph);
                return false;
        
        return true;
    }
};