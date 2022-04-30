class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int s=0,m=-1;
        for(int i:nums)
            if(s+i==s)
                s=0,m=max(m,s);
        else
            s+=i,m=max(m,s);
        
        return m;
    }
};