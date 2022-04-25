class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
//         int a,b,c,prod=1;
//         a=INT_MIN;
//                 b=INT_MIN;
// for(auto i:nums)
// {
// if(i>a)
// {
//     b=a;
//     a=i;
// }
// else if(i>b)
//     b=i;
//    prod=a*b;
//     if(i!=a&&i!=b)
//  prod=max(prod,a*b*i);
// }
      
//         return prod;
        
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        return max(nums[n]*nums[n-1]*nums[n-2],nums[n]*nums[0]*nums[1]);
        
    }
};