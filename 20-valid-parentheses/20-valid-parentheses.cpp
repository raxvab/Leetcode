class Solution {
public:
    bool isValid(string s) {
        // int c=s.length();
      stack<int> st;
   
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
     {     st.push(s[i]);continue;}
        if(st.empty()==0){
         if(s[i]==')'&&st.top()=='(')
          st.pop();
     else   if(s[i]=='}'&&st.top()=='{')
                  st.pop();

        else if(s[i]==']'&&st.top()=='[')
          st.pop();
        else
          st.push(s[i]);}
      else
        st.push(s[i]);
      }
if(st.empty())
  return true;
      return false;
    }
};