class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        // naive approach
          int loc= -1;
        vector<int> ans = nums;
        for (int i=nums.size()-1; i>=0; i--) {
            ans[i] = loc;
            loc = max(loc, nums[i]);
        }
        return ans;
        
    }
};