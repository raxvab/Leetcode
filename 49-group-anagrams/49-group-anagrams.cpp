class Solution {
public:
   
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        
        for(auto s:strs)
        {
            int a[26]={0};
            string x=s;
            sort(x.begin(),x.end());
            
          
                m[x].push_back(s);
            
           
        }
        vector<vector<string>>v;
         for(auto s:m){
            vector<string>dummy;
            for(int i=0;i<s.second.size();i++){
                dummy.push_back(s.second[i]);
            }
            v.push_back(dummy);
         }
             return v;
    }
};