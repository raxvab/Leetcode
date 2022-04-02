class Solution {
public:
  bool isPalindrome(string s)
{
    int c1=0,c2=0;
      int i=0,j=s.length()-1;
          while(i<j)
          {
              if(s[i]==s[j])
                  i++,j--;
              else
                  c1++,i++; if(c1>1)
                  break;
              
          }
      i=0;j=s.length()-1;
          while(i<j)
          {
              if(s[i]==s[j])
                  i++,j--;
              else
                  c2++,j--;
              if(c2>1)
                  break;
              
          }
    
  if(c1== 1 || c2 == 1) 
            return true;
        if(c1 == 0 || c2 == 0)   
            return true;
        
        return false;
  
  }
    bool validPalindrome(string s) {
        
          
           
                
      
        return isPalindrome(s);
    }
};