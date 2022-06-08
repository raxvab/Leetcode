class Solution {
public:
    int removePalindromeSub(string s) {
     int l=0,r=s.size()-1,c=0,c1=0;

        while(l<r)
        {
            if(s[l]==s[r])
                l++,r--;
            else
                l++,c++;
        }
        if(c==0)
            return 1;
        else
            return 2;
        // l=0;
        // int c1=0;
  //       r=s.size()-1;
  //        while(l<r)
  //       {
  //           if(s[l]==s[r])
  //               l++,r--;
  //           else
  //              r--,c1++;
  //       }
  // return max(c,c1);
  //   
    }
};