class Solution {
public:
    int scoreOfParentheses(string s) {
 stack<int> st;
    st.push(0); 
    for(char c:s){
        if(c=='(')
            st.push(0);
        else{
            int tmp=st.top();  st.pop();
            int val=0;
            if(tmp>0) 
                val=tmp*2;
            else 
                val=1;
          st.top()+=val;
        }}
        return st.top();
        // another approach
        /* stack<int> st;
    
        int ans=0;
        
        for(auto i : s)
        {
            if(i == '(')
                ans = 0;st.push(ans);
            else 
                st.pop(),ans = st.top() + max(ans*2 ,1);
        }

        
        
        return ans;*/
    }
};