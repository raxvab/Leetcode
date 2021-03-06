class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        // naive approach
          int m= -1;
        vector<int> ans = nums;
        for (int i=nums.size()-1; i>=0; i--) {
            ans[i] = m;
            m = max(m, nums[i]);
        }
        return ans;
        
    }
};