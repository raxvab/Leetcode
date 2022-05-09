class Solution
{
    // trying to comment the code and by submitting aghain it will push and reflect changes in my repo as well
    // here i have created a check function which basically does is compares the pattern parsed and the substring of the original input string
    
    bool check(string s, string t)
    {
        
  // intialize a new dummy string named str
        string str;
        // In this loop we check weather the newly built string's characters matches the pattern with the specific uppercase and lowercase comparisons 
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                str += s[i];
                // here after addin the current char to the dummy striung what we're tryinig to do is  , comparing the chars with pattern string
                if (s[i] == t[j]) 
                    j++;
                
            }
            // similar in lowercase letter's case as well
            else if (islower(s[i]) && s[i] == t[j])
            {
                str += s[i];
                j++;
            }
        }
        // lastly we're trying to check  weather the strign generated matches the pattern or not
        if (str == t) return true;
        return false;
    }
    public:
        vector<bool> camelMatch(vector<string> &queries, string p)
        {
            vector<bool> v;
            // we're parsing the queries and the pattern to check if the condition mentioned holds
            for (auto i: queries)
            {
                if (check(i, p))
                    v.push_back(true);
                else v.push_back(false);
            }
            return v;
        }
};