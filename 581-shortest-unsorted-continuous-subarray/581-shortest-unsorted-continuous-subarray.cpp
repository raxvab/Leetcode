class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       
        int ans=-1;
        int ans1=-1;
        int m1=nums[0];
        int m2=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++)
        {
            if(m1>nums[i])
                ans=i;
               else
                   m1=nums[i];
        }
        
         for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>m2)
                ans1=i;
               else
                   m2=nums[i];
           
        }
        
   
        
        
      return (ans == -1) ? 0 : (ans - ans1) + 1;
    }
};