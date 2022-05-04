class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        set<string> set1;
        for(auto i:words)
        {
            
            string s="",x="";
            for(int j=0;j<i.length();j++)
            {
                if(j%2==0)
                    s+=i[j];
                
            }
             for(int j=1;j<i.length();j++)
            {
                if(j%2!=0)
                    x+=i[j];
                
            }
           
            sort(s.begin(),s.end());
            sort(x.begin(),x.end());
            
            set1.insert(s+x);
            
            
            
            
            
            
        }
        for( string i: set1)
            cout<<i<<endl;
        return set1.size();
        
        
    }
};