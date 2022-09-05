class Solution {
public:
   
    int n,k,sum;
    int dp[1<<16+1];
    
    int f(int s,int cnt,int mask, vector<int>&v){
        if(cnt==k-1){
            return 1;
        }
        if(dp[mask]!=-1)return dp[mask];
        int ans=0;
        for(int i=0;i<n;i++){
            if(mask&(1<<i))continue;
            if(s+v[i]>sum)break;
            if(s+v[i]==sum){
               mask^=(1<<i);
               ans=max(ans,f(0,cnt+1,mask,v)); 
               mask^=(1<<i);
            }
            else{
               mask^=(1<<i); 
               ans=max(ans,f(s+v[i],cnt,mask,v)); 
               mask^=(1<<i); 
            }
            if(ans==1)break;
        }
        return dp[mask]=ans;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0;
        for(auto x:nums)sum+=x;
        if(sum%k!=0)return 0;
        sum/=k;
        
        this->n=nums.size();
        this->sum=sum;
        this->k=k;
        
        sort(nums.begin(),nums.end());
        memset(dp,-1,sizeof dp);
        return f(0,0,0,nums);
    }
};