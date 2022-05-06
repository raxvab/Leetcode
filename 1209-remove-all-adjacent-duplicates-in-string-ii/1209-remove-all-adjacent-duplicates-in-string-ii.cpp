class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        int n=s.length();
     vector<int>v(n,1);
        stack<int> st;
        st.push(0);
for(int i=1;i<n;i++){
            
            if(!st.empty()){
                if(s[st.top()]==s[i]) 
                    v[i] = v[st.top()] + 1;
            }
            
            st.push(i);
            
            if(v[st.top()] == k){
                int m=k;
                while(m--)
                    st.pop();
                
            }
            
        }
        
        string x="";
        while(!st.empty())
        {
            x+=s[st.top()];
            st.pop();
            
        }
        reverse(x.begin(),x.end());
        return x;
    }
};