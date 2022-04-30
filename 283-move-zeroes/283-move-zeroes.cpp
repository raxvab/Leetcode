class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
        int l=0,r=0;
        
        while(r<nums.size())
        {
if(nums[l]==0)
{
    if(nums[r]!=0)
    { swap(nums[l],nums[r]);
l++,r++;}
    else
        r++;
}
            else
                l++,r++;
        
        
        }    
        
        
        // for(auto i:nums)
        //     cout<<i<<" ";
    }
};