class Solution {
public:
    int arrangeCoins(int n) {
        long long  l=0,h=n;
      long long res=INT_MIN;
      while(l<=h)
      {
        long long int mid=l+(h-l)/2;
        
        long long pod=mid*mid;
        pod+=mid;
        pod/=2;
        
        if(pod<=n)
          res=max(res,mid);
        if( pod>n)
          h=mid-1;
        else
          l=mid+1;
        
      }
      return  (int)res;
    }
};