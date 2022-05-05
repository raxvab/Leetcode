class Solution {
public:
    int balancedStringSplit(string s) {
        
        int ans=0;
  int cr=1;
        for(int i=1;i<s.length();i++)
        { s[i]==s[0]?cr++:cr--;
            if(cr==0)
                ans++;
           
            
            
        }
      return ans;
        
    }
};