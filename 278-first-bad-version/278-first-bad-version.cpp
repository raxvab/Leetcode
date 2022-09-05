// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       	if (isBadVersion(1)) {
		return 1;
	}
      int l=1,h=n;
  while(l<h)  {
  int mid = l + (h - l) / 2 + 1;
    if(!isBadVersion( mid))
   l=mid;
    else 
      h=mid-1;
    
      }
      
      return h+1;
    }
};