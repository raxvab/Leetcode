class Solution {
public:
    
    int lengthOfLastWord(string s) {
int  j=0;
        
        for(int i = s.length()-1; i>=0; i--)
        {
            if(s[i] != ' ')
                j++;
            else if(j > 0)
                return j;
        }
        
        return j;
    }
    
};