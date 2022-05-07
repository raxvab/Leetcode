class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        stack<int> st;
    int n=nums.size();
    int m = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i]<m ) 
            return true;
        while(st.size() and nums[i] >st.top() ){
            m = max(m, st.top());
            st.pop();
        }
        st.push(nums[i]);
    }
    return false;
    }
};