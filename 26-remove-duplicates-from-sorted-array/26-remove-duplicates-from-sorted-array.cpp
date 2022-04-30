class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
      int i=0;
        for(auto j:nums)
            if(j>nums[i])
               i++, swap(j,nums[i]);
        return i+1;
    }
};