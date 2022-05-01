class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int t) {
        // class Solution {

        int n=nums.size();
      //  cout<<nums[0]<<" ";
      
        for(int i=1;i<=n-1;i++)
 {   
           nums[i]=nums[i-1]+nums[i];
            cout<<nums[i]<<" ";

 }             
        
        
        int count=0;
       int m=0;
        m=(1.0*nums[k-1])/(k*1.0);
        if(m>=t)
            count++;
                for(int i=0;i<n-k;i++)
                {
                    int s=nums[i+k]-nums[i];
                    s/=(1.0*k);
                    //m=max(s,m);
                    if(s>=t)
                        count++;
                    
                }
    return count;
    
    }
};