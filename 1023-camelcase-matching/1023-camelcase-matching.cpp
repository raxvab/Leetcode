class Solution
{
     bool check(string s, string t){
        int j=0;
        string str;
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                    str+=s[i];
                if(s[i]==t[j])j++;
            }
            else if(islower(s[i])&&s[i]==t[j]){
                str+=s[i];
                j++;
            }
        }
        if(str==t)return true;
        return false;
    }
    public:
        vector<bool> camelMatch(vector<string> &queries, string p)
        {
           vector<bool>v;
        for(auto i:queries){
            if(check(i,p))
                v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
   
        
};