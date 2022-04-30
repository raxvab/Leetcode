class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
      
int first=-1;
int second=-1;
        int ind=0;

for(int i=0;i<nums.size();i++)
{
    if(nums[i]>first)
    second=first,first=nums[i],ind=i;
    
    else if(nums[i]<first&&nums[i]>second)
    second=nums[i];
    
}
        if(first>=second*2)
            return ind;
        return -1;
        
    
    }
};