class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int x=n-k;
        int y=x;
        
        vector<int> v;
        
        while(x<n)
            v.push_back(nums[x]),x++;
        // for(auto i:v)
// cout<<i<<" ";
        int i=0;
        while(i<y)
                        v.push_back(nums[i]),i++;
        // for(auto i:v)
// cout<<i<<" ";

       nums=v;
        return;
        
    }
};