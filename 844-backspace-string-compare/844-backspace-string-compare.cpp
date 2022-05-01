class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string s1="";
        for(auto i:s)
           { if(i=='#'&&!s1.empty())
                s1.pop_back();
        else if(i!='#')
            s1+=i;}
        //cout<<s1;
        string s2="";
        for(auto i:t)
          {  if(i=='#'&&!s2.empty())
                s2.pop_back();
           else if(i!='#')

            s2+=i; }
        cout<<s1<<endl<<s2;
        
        if(s1==s2)
            return true ;
        return false;
        
    }
};