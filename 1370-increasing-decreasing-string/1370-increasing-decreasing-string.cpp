class Solution {
public:
    string sortString(string s) {
        
       
      
        
      int alp[26]={0};
     
        
        for(int i=0 ; i<s.length() ; i++)
            alp[s[i]-'a']++;
        
        string res="";
        while(res.length()<s.length())
        {
            for(int i=0 ; i<26 ; i++)
            
                if(alp[i]>0&& res.length()<s.length())
                
                    res+=(i+'a'),alp[i]--;
                
            
            for(int i=25 ; i>=0 ; i--)
            
                 if(alp[i]>0&& res.length()<s.length())
                
                    res+=(i+'a'), alp[i]--;
                
            
                
        }
        return res;
        
        
        
    }
};