class Solution {
public:
    int minSteps(string s, string t) {
      
int ans=0;
        unordered_map<char,int>m1;
        
        for(int i=0;i<s.length();i++)
        {
          
            m1[t[i]]++;
            
            
            }
        
         for(int i=0;i<s.length();i++)
     
        if(m1[s[i]])m1[s[i]]--;
                      else ans++;
       
        return ans;
        
    }
};