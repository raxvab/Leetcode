class Solution {
public:
    bool isIsomorphic(string s, string t) {
      char m1[128]={};
        string ans1="";
  
        char ch1 = 'a';
        for (char c : s) {
            if (m1[c] == 0) {
                m1[c] = ch1;
                ++ch1;
            }
            ans1 += m1[c];
        }
       char m2[128]={};
        
        string ans2="";
  
        char ch2 = 'a';
        for (char c : t) {
            if (m2[c] == 0) {
                m2[c] = ch2;
                ++ch2;
            }
            ans2 += m2[c];
        }
        
        return ans1==ans2;
    }
};