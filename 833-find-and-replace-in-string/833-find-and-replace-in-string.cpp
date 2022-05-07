class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        
        unordered_map<int,pair<int,string>> m;
        for(int i=0;i<indices.size();i++)
        {
            if(s.substr(indices[i],sources[i].size())==sources[i])
            {
                m[indices[i]]=make_pair(sources[i].size(),targets[i]);
            }
        }
        
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(m.find(i)!=m.end())
            {
                ans+=m[i].second;
                i+=m[i].first-1;
                
            }
            else
                ans+=s[i];
            
        }
    
        return ans;
    
    
    
    
    
    
    
    
    
    
    }
    
    
    
    
    
};