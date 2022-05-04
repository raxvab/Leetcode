class Solution {
public:
    string reverseWords(string s) {
           int mini = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(s.begin() + mini, s.begin() + i);
                mini = i + 1;
            }
        }
        reverse(s.begin() + mini, s.end());
        return s;
    }
};