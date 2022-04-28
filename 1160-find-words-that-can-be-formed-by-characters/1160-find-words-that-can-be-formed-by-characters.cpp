class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
         vector<int> v1(26, 0);
     
        for(auto i : chars) 
            v1[i - 'a']++;
        
        int ans = 0;
        
        for(auto s : words)
        {
            bool flag = true;
            vector<int> v2(26, 0);
            
            for(auto j : s) {
                v2[j-'a']++;
                if(v2[j - 'a'] > v1[j - 'a'])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) ans += s.size();
        }
        
        return ans;
        
    }
};