class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len=s.length();
        for(int i=len/2;i>=1;i--)
        {
            if(len%i==0)
            {
                
            
            int rep=len/i;
                string substring=s.substr(0,i);
                string x;
                while(rep)
                {
                    rep--;
                    x+=substring;
                    
                }
                if(x==s)
                    return true;
                
            
            
            }
        }
        return false;
        
        
    }
};