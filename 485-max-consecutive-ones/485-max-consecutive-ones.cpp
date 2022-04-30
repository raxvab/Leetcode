class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=0,m=-1;
        for(int i:nums)
            i==1?m=max(m,++s):m=max(m,s=0);
        
        return m;
    }
};