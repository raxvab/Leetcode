class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        // approach one brtue + hashing
//        unordered_map<int,int> m;
//         for(int i=0;i<n;i++)
//         {m[nums[i]]++;
//               if(m[nums[i]]>n/2)
//                 {
//                      return nums[i];
//                  }   
            
//         }
        
        int c=0,ind=0;
        for(int i=0;i<n;i++)
        {
            nums[ind]==nums[i]?c++:c--;
            if(c==0)
            ind=i,c=1;
        }
        
        
        return nums[ind];
    }
};