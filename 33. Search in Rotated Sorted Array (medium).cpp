class Solution {
public:
  int search(vector<int>& nums, int target) {
        
        int lo=0,hi=nums.size()-1;
        int mid,lowest= INT_MAX,ind=0;
        
        while(lo<hi)
        {
        mid=(lo+hi)/2;    
        if(nums[mid]<lowest)
            lowest=nums[mid],ind=mid;
            if(nums[mid]>nums[hi])
                lo=mid+1;
        else
            hi=mid;
        
        }
       
    // cout<< ind<<" "<< lo<<endl;
     ind=lo; lo=0;
      hi=nums.size()-1;
      
      while(lo<=hi)
        {
        int rmid=(lo+hi)/2;   
        mid=(rmid+ind)%(nums.size());
          
        if(nums[mid]==target)
            return mid;
         // break;
        if(nums[mid]<target)
            lo=rmid+1;
        else
            hi=rmid-1;
        }
     // return mid;
      
      
      
    return -1;
    }
};
