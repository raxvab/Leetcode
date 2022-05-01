class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=INT_MIN;
        int crsum=0;
        for(int i=0;i<nums.size();i++)
        {
            crsum+=nums[i];
           sum=sum<crsum?crsum:sum; 
            
            if(crsum<0)
                crsum=0;
            
        }
        return sum;
        
    }
};