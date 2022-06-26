class Solution {
public:
    string reorganizeString(string s) {
        int f[26]={0};
        
        int n=s.size();
          if(n == 0)
            return "";
        int mm=INT_MIN;
        
      for(auto a : s)
            f[a - 'a']++;
        
        char maxch;
        for(int i = 0; i<26; i++)
            if(mm < f[i]){
                mm = f[i];
                maxch = 'a' + i;
            }
        if(mm>(n+1)/2)
            return {};
  
       string res(n,' ');
        int i=0;
        while(mm){
            res[i] = maxch;
            i+=2;
            mm--;
        }
        f[maxch-'a']=0;
        
        for(int j=0;j<26;j++)
        {
            while(f[j])
                {if(i>=n)
                i=1;
            
            res[i]=j+'a';
            i+=2;
            f[j]--;
            }
        }
        return res;
        
        
        // while()
        
        
        
        
//         return "";
        
    }
};