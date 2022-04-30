class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++)
            nums[i]==0?j=i:nums[i]*=nums[i];
        
        int i=0;
        sort(nums.begin(),nums.end());
        // while(i<=j)
        // {
        //     swap(nums[i],nums[j]);
        //     i++,j--;
        // }
        return nums;
    }
};