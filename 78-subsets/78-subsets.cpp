class Solution {
public:
    vector<vector<int>> res;
    void subs(vector<int> &nums,vector<int> cr,int ind)
    {
        
        if(ind==nums.size())
        {
            res.push_back(cr);
            return; 
        }
        subs(nums,cr,ind+1);
        cr.push_back(nums[ind]);
        subs(nums,cr,ind+1);
        return ;
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
   
        vector<int> cr;
        subs(nums,cr,0);
      return res;
        
    }
};