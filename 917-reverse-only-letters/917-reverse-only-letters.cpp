class Solution {
public:
    string reverseOnlyLetters(string s) {
      // stack<char>a;
      //   for(auto i:s)
      //       if(isalpha(i))
      //       a.push(i);
      //   // reverse(a.begin(),a.end());
      //   // cout<<a;
      //    int k=0;
      //   for(int i=0;i<s.length();i++)
      //       if(isalpha(s[i])){
      //    s[i]=a.top();
      //           a.pop();
      //    k++;}
         int l = 0, r = s.length() - 1;
        while (l < r) {
            while (l < r && !isalpha(s[l]))
                ++l;
            while (l < r && !isalpha(s[r])) 
                --r; 
            swap(s[l++], s[r--]);
        }
         
        return s;
    }
};