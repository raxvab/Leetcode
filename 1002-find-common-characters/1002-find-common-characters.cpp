class Solution {
public:
    vector<string> commonChars(vector<string>& w) {
     
     vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto i:w[0])
            v1[i-'a']++;
        
        for(string s:w)
        {
for(char ch:s)
{
    v2[ch-'a']++;
}
            
            for(int i=0;i<26;i++)
            {
                v1[i]=min(v1[i],v2[i]);
                v2[i]=0;
            }
        
        
        }
        
        vector<string> ans;
       for(int i=0;i<26;i++)
       {
          while(v1[i]--)
               {
                   string s="";
                   s.append(1,(char)(i+97));
                   ans.push_back(s);
               }
           }
       
        return ans; 
    }
};