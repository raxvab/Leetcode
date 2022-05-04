class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
          set<string>s;
        for(auto i: emails)
        { 
            string temp="";
            for(auto j: i)
            {
                if(j!='+' and j!='@' and j!='.' )
                    temp+=j;
                if(j=='+' or j=='@')
                    break;
            }
            // search @ for distinguishingstorage in set
        int f=i.find('@');
         for(auto it=i.begin()+f; it!=i.end(); it++)
             temp+= *it;
             s.insert(temp);
        }
       
        return s.size();
        
    }
};