class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums[nums.size()/2];
        int sum=0;
        for(auto i:nums)
            sum+=abs(x-i);
    
    return sum;}
};