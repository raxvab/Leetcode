class Solution {
public:
    bool isPossibleToReachHigh(vector<int>& nums, int& m,int mid){
        long long int n=nums.size(),count=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid) sum+=nums[i];
            else{
                count++;
                sum=nums[i];
                if(count>m) return true; //more than "m" intervals want to get separated
            }
        }
        return false; //fewer than "m" intervals want to get separated
    }
    
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        long long int low=INT_MIN,high=0,mid;
        for(int i=0;i<n;i++){
            low=max(low,(long long int) (nums[i]));
            high+=nums[i];
        }
        while(low<high){
            mid=low+(high-low)/2;
            if(isPossibleToReachHigh(nums,m,mid)) //increase the bar
                low=mid+1;
            else high=mid; //lower the bar
        }
        return low;
    }
};
