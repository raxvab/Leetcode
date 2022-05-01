class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // sliding window approach
        int n=nums.size();
      //  cout<<nums[0]<<" ";
      
        for(int i=1;i<=n-1;i++)
 {   
           nums[i]=nums[i-1]+nums[i];
            cout<<nums[i]<<" ";

 }             
        
        
        
       double m=0;
        m=(1.0*nums[k-1])/(k*1.0);
        
                for(int i=0;i<n-k;i++)
                {
                    double s=nums[i+k]-nums[i];
                    s/=k;
                    m=max(s,m);
                    
                }
    return m;
    }
};