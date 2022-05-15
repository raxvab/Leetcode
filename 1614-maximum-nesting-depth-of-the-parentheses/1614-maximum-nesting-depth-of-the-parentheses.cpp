class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int c = 0;
        for(int i = 0; i< s.size(); i++){
            if(s[i]== '('){
                c++;
            ans = max(c, ans);
            }
        if(s[i] == ')'){
            c--;
        }
    }
    return ans;
    }
};