class Solution {
public:
    vector<vector<int>> ans;
    void back(vector<int>&v,int i)
    {
        if(i==v.size())
            {
        ans.push_back(v);
        return;
        }
         for(int j=i;j<v.size();j++ )
             {
                 swap(v[i],v[j]);
                 back(v,i+1);
                                  swap(v[i],v[j]);

             }
            
    }
    vector<vector<int>> permute(vector<int>& nums) {
        back(nums,0);
        return ans;
    }
};