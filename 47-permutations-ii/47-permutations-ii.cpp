class Solution {
public:
  
     vector<vector<int>> ans;
    set<vector<int>> s;
    void back(vector<int>&v,int i)
    {
        if(i==v.size()&&s.find(v)==s.end())
            {
        ans.push_back(v);
            s.insert(v);
        return;
        }
         for(int j=i;j<v.size();j++ )
             {
                 swap(v[i],v[j]);
                 back(v,i+1);
                                  swap(v[i],v[j]);

             }
            
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        back(nums,0);
        return ans;
    }     
    
};