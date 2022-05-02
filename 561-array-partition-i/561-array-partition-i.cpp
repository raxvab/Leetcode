class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
     
		int r = 0;
		for(int itr = 0; itr < nums.size(); itr += 2)
        { 
			r+= nums[itr];
		}
		return r;
}
};