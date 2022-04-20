class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // first I'll sort the vector then
        // I'll try the two pointer approach for this problem initializing them at the both ends
        //sort(nums.begin(),nums.end());
        
        
    //  update 1: this approach won't work I'll have to keep a hash table for the indices
        unordered_map<int,int> m;
        int i=0,j=nums.size();
        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i;
        unordered_map<int,int>:: iterator it;
        
            while(i<nums.size())
         {
             if((m.find(target-nums[i]))!=m.end())
                {  j=m[target-nums[i]];
                   if(i!=j) 
                    return {i,j};
             
                }
                 
              i++;
         }
        return {};
    }
};