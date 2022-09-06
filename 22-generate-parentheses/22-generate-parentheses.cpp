class Solution {
public:
  
  void helper( vector<string>&ans, string s, int n, int m)
  {
    
    if(n==0 and m==0)
    {
      ans.push_back(s);
      return;
    }
    
    if(m>0)
      {helper( ans, s+")",n,m-1);}
    if( n>0)
      {helper( ans, s+"(",n-1,m+1);  }
  }
    vector<string> generateParenthesis(int n) {
        vector< string> ans;
    
      helper( ans,"", n,0);
      return ans;
    }
};


/*
    void addingpar(vector<string> &v, string str, int n, int m){
        if(n==0 && m==0) {
            v.push_back(str);
            return;
        }
        if(m > 0){ addingpar(v, str+")", n, m-1); }
        if(n > 0){ addingpar(v, str+"(", n-1, m+1); }
    }
};*/