class Solution {
private:
    unordered_map<string, vector<pair<string, double>> > graph;
    unordered_set<string> vis;
    bool calculate_dfs(string s, string d, double curr_product, double& answer){
        if(s == d && graph.find(d) != graph.end()){
            answer = curr_product;
            return true;
        }
        
        vis.insert(s);
        for(pair<string, double>& neighbour : graph[s]){
            if(vis.find(neighbour.first) == vis.end() && 
                    calculate_dfs(neighbour.first, d, curr_product * neighbour.second, answer))
                return true;
        }
        return false;
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n = equations.size();
        for(int i = 0; i < n; i++){    
            graph[equations[i][0]].push_back({equations[i][1], values[i]});
            graph[equations[i][1]].push_back({equations[i][0], 1 / values[i]});
        }
        
        vector<double> answers;
        for(vector<string>& query : queries){
            vis.clear();
            double answer = -1.0F, curr_product = 1.0F;
            calculate_dfs(query[0], query[1], curr_product, answer);
            answers.push_back(answer);
        }
        return answers;
    }
};