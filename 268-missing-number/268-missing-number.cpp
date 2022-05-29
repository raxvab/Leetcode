class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int maxx=nums.size();
      
      int sum=0;
      for(auto i:nums)
      sum+=i,  maxx=max(i,maxx);
      return ((maxx*(maxx+1))/2)-sum;
    }
};