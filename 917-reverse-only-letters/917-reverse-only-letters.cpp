class Solution {
public:
    string reverseOnlyLetters(string s) {
        string a="";
        for(auto i:s)
            if(isalpha(i))
            a+=i;
        reverse(a.begin(),a.end());
        cout<<a;
         int k=0;
        for(int i=0;i<s.length();i++)
            if(isalpha(s[i])){
         s[i]=a[k];
         k++;}
        return s;
    }
};