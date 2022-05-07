class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string> >m;
        for(string s: paths)
        {
            stringstream ss(s);
            string root="";
            string dummy;
            getline(ss,root,' ');
            while(getline(ss,dummy,' '))
       {   string fileName = root + '/' + dummy.substr(0, dummy.find('('));
		    string fileContent = dummy.substr(dummy.find('(') + 1, dummy.find(')') - dummy.find('(') - 1);
		   m[fileContent].push_back(fileName);
       }
        }
        
         vector<vector<string>> res;
       for (auto i : m) {
	    if (i.second.size() > 1)
		   res.push_back(i.second);
    }
        return res;
    }
};