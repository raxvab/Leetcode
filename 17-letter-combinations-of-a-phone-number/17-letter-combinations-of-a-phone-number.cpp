class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // here we'll return the function if there are no digits present
        if(digits.size()==NULL)
            return {};
          vector<string> ans;
        //we are hasing the keys in a string array
        string keys[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      
        ans.push_back("");
        
        for(int i=0;i<digits.size();i++)
        {
            vector<string> ch;
            string tmp=keys[digits[i]-'0'];
            for(int i=0;i<tmp.size();i++)
            
                 for (int j = 0; j < ans.size();j++)
                     
           
             
                ch.push_back(ans[j]+tmp[i]);
          
                 ans=ch;
                
        
            
            
        }
        
        
        return ans;
       
    }
};