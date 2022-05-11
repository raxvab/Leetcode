class Solution {
public:
    int numberOfSubstrings(string s) {
      
        int ans = 0;
        int ca = 0, cb = 0, cc = 0;
        int j = 0;
        for(int i =0 ; i< s.size(); i++){
            
            if(s[i]=='a') ca++;
            if(s[i]=='b') cb ++;
            if(s[i] == 'c') cc++;
            
            while(ca>0 and cb>0 and cc>0){
                
                ans+=(s.size()-i);
                if(s[j]=='a') ca--;
                if(s[j]=='b') cb--;
                if(s[j]=='c') cc--;
                    j++;
                
            }
            
        }
        
        return ans;
        
    }
};