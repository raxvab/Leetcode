class Solution {
public:
    string multiply(string num1, string num2) {
        
        string s(num1.size()+num2.size(),'0');
        
       for (int i = num1.size() - 1; 0 <= i; --i) {
        int carry = 0;
        for (int j = num2.size() - 1; 0 <= j; --j) 
        {
int res=s[i+j+1]-'0'+carry+(num1[i]-'0')*(num2[j]-'0');
        s[i+j+1]=res%10+'0';
            carry=res/10;
        
        }
           s[i]+=carry;
            
            
        }
        for(int i=0;i<s.length();i++)
            if(s[i]!='0')
                return s.substr(i,s.length());
        
      //  cout<<s;
        return "0";
        
    }
};