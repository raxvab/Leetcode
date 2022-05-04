class Solution {
public:
    string generateTheString(int n) {
        string s="";
        if(n<=26)
        {
            while(n--)
                s+=n+'a';
            return s;
        }
        else
        {n--;
         if(n%2==1)
          { while(n--)
               s+='a';
            s+='b';}
         else
         { n++;
             while(n--)
              s+='a';   
         }
            return s;
            }
      
        return s;
        
    }
};