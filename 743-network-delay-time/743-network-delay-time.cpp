class Solution
{
    public:
        int networkDelayTime(vector<vector < int>> &times, int n, int k)
        {
            // here the problem simply is to reach all thenodes and return the time taken by the traversal maximum
            
            int i, j, ans = 0;
            
            // we intend to creat an adjacency list here
            vector<vector<pair<int, int>>> adj(n + 1);
            // distance vector with an intially very large value so that it's easy to pick out the recent node
            vector<int> dist(n + 1, 1e9);
            
            // creating the graph here
            for (auto u: times) 
                adj[u[0]].push_back({ u[1],u[2] });
            
            
            // here we iniialize a priority queue for the path and thier visited time as a min HEAP
            
            priority_queue<pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>>> pq;
            
            // we push first node here by default
            pq.push({ 0,k });
            dist[k] = 0;
            
            // breadth frist traversal is applied here
            
            while (pq.size())
            {
                auto[d, t] = pq.top();
                pq.pop();
                
                for (auto[x, y]: adj[t])
                {
                    // if the current distance is lessser than initialized  one which obv was 1e9 we push it to the min heap
                    if (d + y < dist[x])
                    {
                        dist[x] = d + y;
                        pq.push({ d + y,x });
                    }
                }
            }
            
            // here we check if any node is let unvisited if that's so we return -1 cuz no matter waht signal won't reach there (connected components)
            for (i = 1; i <= n; i++)
               if(dist[i]==1e9)
                   return -1;
            else
                   ans = max(ans, dist[i]);
            return ans;
        }
};