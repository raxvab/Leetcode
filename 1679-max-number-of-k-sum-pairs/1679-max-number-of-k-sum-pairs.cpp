class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       unordered_map<int,int>m;
        
        for(int i:nums)
            m[i]++;
        
        
        int ans=0;
        for(auto i:m)
        {
            
            if(m.find(k-i.first)!=m.end())
                ans+=min(i.second,m[k-i.first]);
            
        }
        
       
        return ans/2;  
    }
};