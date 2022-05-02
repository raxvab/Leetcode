class Solution {
public:
    int thirdMax(vector<int>& nums) {
       
       long second=LONG_MIN;
        long first =LONG_MIN;
        long third=LONG_MIN;
        for(int i:nums)
            {
                if(first==i||second==i||i==third)
                    continue;
                if(i>first)
                    {third=second;
                     second=first;
                     first=i;
                    }
                else if(i>second )
                   {   third=second;second=i;
                 
                   }
                else if(i>third) 
                    third =i;
                
            }
     

        return third==LONG_MIN?first:third;
    }
};