class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
       
         sort(nums.begin(), nums.end());
      for(unsigned int i=0;i<nums.size();i++)
      { 
        if ((i>0) && (nums[i]==nums[i-1]))
            continue;
     int j=i+1,k=nums.size()-1;
          while(j<k)
       {if (nums[i] + nums[j] + nums[k] == 0)
               { ans.push_back(vector<int> {nums[i], nums[j], nums[k]});
               while(k-1>=j && nums[k-1]==nums[k]) k--;
            while(j+1<k && nums[j+1]==nums[j] ) j++;
                j++; k--;
     }
            
         else if (nums[i] + nums[j] + nums[k] < 0)
                j++;
             else 
                k--; 
     
      }}
        
        return ans;
    }
};