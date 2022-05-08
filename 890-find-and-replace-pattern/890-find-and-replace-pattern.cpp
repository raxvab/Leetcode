class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string> ans;
        for(int i=0;i<words.size();i++){
            int f = 1;
            map<char,int> m1,m2;
            for(int j=0;j<words[i].size();j++){
                if(m1.find(pattern[j])!=m1.end() && m1[pattern[j]]!=words[i][j]){
                    f = 0;
                    break;
                }
                else if(m2.find(words[i][j])!=m2.end() && m2[words[i][j]]!=pattern[j]){
                    f = 0;
                    break;
                }
                else{
                    m1[pattern[j]] = words[i][j];
                    m2[words[i][j]] = pattern[j];
                }
            }
            if(f){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};