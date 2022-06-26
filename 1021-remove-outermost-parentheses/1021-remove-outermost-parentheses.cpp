class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";        

        stack<char> st;
        for(auto i:s)
        {
            if(st.empty())
            
            st.push(i);
            else{
             if(i=='(')
             {   st.push(i);
                ans += i;
            }
            else if(st.size() != 1)
            {
                st.pop();
                ans += i;
            }
            else
            {
                st.pop();
            }
                }  }     

     
    return ans;}
};