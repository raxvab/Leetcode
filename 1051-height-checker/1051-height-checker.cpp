class Solution {
public:
    int heightChecker(vector<int>& heights) {
       // int c=0;
       //  for(int i=0;i<nums.size();i++)            
       //  {
       //      if(nums[i]<nums[i+1]&&c)
       //          c++;
       //      else if(nums[i]>nums[i+1])
       //          c++;
       //  }
       //  return c;
    
          vector<int> expected(heights.begin(), heights.end());
       sort(expected.begin(), expected.end());
        
        int count = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] != expected[i])
                count++;
        }
        return count;
    }
};