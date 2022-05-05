class Solution {
public:
    string defangIPaddr(string address) {
        string s="[.]";
        string x="";
        
        for(auto i:address)
        if(i=='.')
        x+=s;
        else
       x+=i; 
    
    return x;}
};