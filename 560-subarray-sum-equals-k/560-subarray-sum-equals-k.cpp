class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     
       std::unordered_map<int, int> seen = {{0, 1}};
        int count = 0, sum = 0;
        for (auto n: nums) {
            sum += n;
              if (seen.end() != seen.find(sum - k))
          
            count += seen[sum - k];
            seen[sum]++;
        }
        return count;
  
	
    }
};