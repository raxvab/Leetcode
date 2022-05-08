class Solution {
public:
    bool check(string &s,string &t){
            int a1[26]={0};
                int a2[26]={0};
      if(s.length()!=t.length())
         return false;
        
for(auto i:s)
    a1[i-'a']++;
for(auto i:t)
    a2[i-'a']++;
        
        for(int i=0;i<26;i++)
            if(a1[i]!=a2[i])
                return false;
        return true;}
    
    
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