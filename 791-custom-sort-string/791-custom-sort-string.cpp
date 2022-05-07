class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> freq(26,0);
        for(auto ch:s)
            freq[ch-'a']++;
        string ans="";
        for(auto ch:order)
        {
        while(freq[ch-'a']>0)
            ans+=ch,freq[ch-'a']--;
        }
        
        for(auto ch:s)
            while(freq[ch-'a']>0)
                          ans+=ch,freq[ch-'a']--;

        
        return ans;
    }
};