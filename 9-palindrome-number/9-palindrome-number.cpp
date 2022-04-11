class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        s= to_string(x);
        string v=s;
        reverse(v.begin(),v.end());
        if(v==s)
            return 1;
        else
            return 0;
    }
};