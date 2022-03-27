class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        // if the sum isn't even why is there even a need of division into two "EQUAL" parts :)
        if(sum&1)
            return false;
        else
        {
            return subsetsum(nums,sum/2);
        }
        
    }
    public:
    bool subsetsum(vector<int> nums, int sum )
    {
       bool t[nums.size()][sum+1];
        
        // initializing the base values
         for (int i = 0; i < nums.size(); i++)
     t[i][0] = true;
    for (int i = 1; i <= sum; i++)
t[0][i] = false;
        
        // finally we're filling in the boolean values while checking the number could be a part of the subset or not
        for(int i=1;i<nums.size();i++)
            for(int j=1;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j-nums[i-1]]||t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        
   //uncomment these lines to print the 2d array dp  
   
        // for(int i=0;i<nums.size();i++)
     // { 
     //     for(int j=0;j<=sum;j++)
     //         cout<<t[i][j]<<" ";
     //              cout<<endl;
     // }
    
        
        return t[nums.size()-1][sum];
    }
};
