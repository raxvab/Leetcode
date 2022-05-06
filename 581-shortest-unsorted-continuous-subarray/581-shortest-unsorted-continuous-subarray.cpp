class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       
      
        int m1=INT_MAX;
        int m2=INT_MIN;//nums[nums.size()-1];
       bool flag=false;
        for(int i=1;i<nums.size();i++)
        {
           if(nums[i]<nums[i-1])
               flag= true;
            if(flag)
                m1=min(m1,nums[i]);
        }
        flag=false;
         for(int i=nums.size()-2;i>=0;i--)
        {
             if(nums[i]>nums[i+1])
               flag= true;
            if(flag)
                m2=max(m2,nums[i]);
           
        }
        int l=0,r=0;
          for(l=0;l<nums.size();l++)
              if(m1<nums[l])
                  break;
        for(r=nums.size()-1;r>=0;r--)
              if(m2>nums[r])
                  break;
        
      return r-l<0?0:r-l+1;
    }
};