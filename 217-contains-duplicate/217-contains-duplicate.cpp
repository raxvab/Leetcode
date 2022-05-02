class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // space ciomplexity hike    
        unordered_set<int> s(nums.begin(), nums.end());
     
        return (s.size() != nums.size());

//       sort(nums.begin(), nums.end());
//         for (int i = 1; i < nums.size(); i++)
//             if (nums[i] == nums[i - 1]) return true;
//         return false;
    }
};