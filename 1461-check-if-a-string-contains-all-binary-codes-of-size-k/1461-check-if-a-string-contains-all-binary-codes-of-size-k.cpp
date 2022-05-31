class Solution {
public:
    bool hasAllCodes(string s, int k) {
      unordered_set<string>st;
        if(s.length()<k)
            return false;
        for(int i=0;i<s.length()-k+1;i++)
        {
            st.insert(s.substr(i,k));
        }
        
        return st.size()==1<<k;
    }
};