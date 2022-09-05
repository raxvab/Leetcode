class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    vector<int> :: iterator;
      int iter=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
return iter;    }
};