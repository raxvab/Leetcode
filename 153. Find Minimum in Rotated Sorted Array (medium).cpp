class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int lo=0,hi=nums.size()-1;
        int mid,lowest= INT_MAX;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return min(nums[0],nums[1]);
        while(lo<hi)
        {
        mid=(lo+hi)/2;    
            // instead of a target to find in the base condition here we are comparing the current lowest to nums[mid]
        if(nums[mid]<lowest)
            lowest=nums[mid];
            if(nums[mid]>nums[hi])
                lo=mid+1;
        else
            hi=mid;
        
        }
        // here the value of lo will hold the lowest value
        lowest=nums[lo];
        
    // uncomment below to run linear search
        /*for(int i=0;i<nums.size();i++)
            if(lowest>nums[i])
                lowest=nums[i];*/
        return lowest;
    }
};
