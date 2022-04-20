class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // first I'll sort the vector then
        // I'll try the two pointer approach for this problem initializing them at the both ends
        //sort(nums.begin(),nums.end());
        
        
    //  update 1: this approach won't work I'll have to keep a hash table for the indices
        unordered_map<int,int> m;
        int i=0,j=nums.size();
        for(auto i:nums)
            m[i]++;
        unordered_map<int,int>:: iterator it;
        
            while(i<nums.size())
         {
             if((m.find(target-nums[i]))!=m.end())
                {  auto t= find(nums.begin(),nums.end(),target-nums[i]);
                    j=t-nums.begin();
                   if(i!=j) 
                    return {i,j};
             
                }
                 
              i++;
         }
        return {};
    }
};