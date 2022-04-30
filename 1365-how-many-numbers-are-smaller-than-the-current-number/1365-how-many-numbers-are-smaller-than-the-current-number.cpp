class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
 vector<int> v = nums;
        sort(v.begin(), v.end());
        
        for(int& i : nums)
        {
            i = lower_bound(v.begin(), v.end(), i) - v.begin();
        }
        return nums;
    
    }
};