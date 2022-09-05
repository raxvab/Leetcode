class Solution {
public:
    bool isPerfectSquare(int num) {
    
      long long int l=1,h=(long long int)num;
      while(l<=h)
      {
        long long int mid= (l+h)>>1;
        if( mid*mid==num)
          return true;
        else if( mid*mid> num)
          h=mid-1;
        else l=mid+1;
        
  
      
      
      
    }
    return false;}
  
};