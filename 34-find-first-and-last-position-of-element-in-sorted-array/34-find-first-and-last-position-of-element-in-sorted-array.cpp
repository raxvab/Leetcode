class Solution {
public:
    int BS(vector<int>& nums, int target)
    {
        int r = nums.size()-1;
        int l=0;
        int mid=l+r;mid/=2;
        
        int ind=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
                ind=mid,r=mid-1;
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return ind;
    }
     int BS2(vector<int>& nums, int target)
    {
        int r = nums.size()-1;
        int l=0;
        int mid=l+r;mid/=2;
        
        int ind=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid]==target)
                ind=mid,l=mid+1;
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return ind;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
       int first= BS(nums, target);
                int second;

        if(first==-1)
            return {-1,-1};
        else
              second= BS2(nums, target);
        
        return {first,second};
        
            
    }
};