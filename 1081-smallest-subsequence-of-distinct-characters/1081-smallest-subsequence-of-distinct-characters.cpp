class Solution {
public:
    string smallestSubsequence(string text) {
      vector<bool> v(26, false);
        vector<int> freq(26, 0);

        for(char ch : text)
            freq[ch - 'a']++;

        stack<char> st;

        for(int i=0; i<text.size(); i++){
            char ch = text[i];

            freq[ch - 'a']--;
            if(v[ch - 'a'])
                continue;

            while(st.size() != 0 && st.top() > ch && freq[st.top() - 'a'] > 0){
                v[st.top() - 'a'] = false;
                st.pop();
            }
            v[ch - 'a'] = true;
            st.push(ch);
        }

        string ans = "";
        while(st.size() != 0){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;    
    }
};