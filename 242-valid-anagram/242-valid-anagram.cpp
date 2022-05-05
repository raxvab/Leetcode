class Solution {
public:
    bool isAnagram(string s, string t) {
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
        return true;
    }
};