class Solution {
public:
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        
           int b1[26]={0};
           for(string i: w2) {
               
           int c1[26]={0};
            for(char j : i) {
                c1[j-'a']++;
            }
                       
              for(int k=0;k<26;k++) 
                
                b1[k] = max(b1[k],c1[k]); 

        }  
        
        
                vector<string>res;

        for(auto i: w1) {
                    int a1[26]={0};
            for(char j : i) {
                a1[j-'a']++;
            } 
            
              bool flag = true;
            
            for(int k=0;k<26;k++) {
                if(a1[k]<b1[k]) 
                   { flag = false;
                    break;}
                } 
            if(flag) 
                res.push_back(i);
           
            }
          
        
        return res;
        
    }
};