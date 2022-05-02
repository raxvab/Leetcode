class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n= nums.size(), p=1;
        vector<int> res(n);
        
        for(int i=0; i<n; i++){
            p *= nums[i];
            res[i]=p;
        }
        
        int product=1;
        for(int i=n-1; i>0; i--){
            res[i]= res[i-1]*product;
            product *= nums[i];
        }
        res[0]=product;
        
        return res;
        
    }
};