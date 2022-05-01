class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        // two pointer approach
        
        
        int m=p[0];
        int prof=INT_MIN;
        for(int i=0;i<p.size();i++)
        {
            m=min(p[i],m);
prof= max(prof,p[i]-m);            
            
            
        }
        
        
        return prof;
    }
};