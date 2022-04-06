class Solution {
public:
    int threeSumMulti(vector<int>& nums, int t) {
   sort(nums.begin(),nums.end());
        int mod=1000000007;
        unordered_map<int,long> m; 
         unordered_map<int,long>::iterator it;
int n=nums.size();
        int ans=0;
        for(int i=0; i<n; i++)
        {
           ans = (ans + (m[t-nums[i]])) % mod;
            
             for(int j=0; j<i; j++)
            {
                m[nums[i] + nums[j]]++;
            }
        }
      
      return ans;
    }
};