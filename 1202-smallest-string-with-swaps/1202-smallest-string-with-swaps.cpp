class Solution {
public:
    
    vector<int>graph[100001];
   bool visited[100001];
    
    void helper(string& s, int i, vector<char>&  alp, vector<int>& index){
        alp.push_back(s[i]);
        index.push_back(i);
        
        visited[i] = true;
        for(int neighbour :graph[i]){
            if(!visited[neighbour])
                helper(s, neighbour, alp, index);
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        for(auto i : pairs){
            int alp1 = i[0];
            int last = i[1];
            
            graph[alp1].push_back(last);           
            graph[last].push_back(alp1);
        }
        
        for(int i=0; i<s.size(); i++){
            if(!visited[i]){
                vector<char>alp;
                vector<int>index;
                
                helper(s, i, alp, index);
                
                sort(alp.begin(), alp.end());
                sort(index.begin(), index.end());
                int N= alp.size();
                for(int j = 0; j< N; j++)
                    s[index[j]] = alp[j];
            }
        }
        return s;
    }
};