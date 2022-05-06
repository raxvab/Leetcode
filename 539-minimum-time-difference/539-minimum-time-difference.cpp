class Solution {
public:
    int findMinDifference(vector<string>& tp) {
        
int n=tp.size();
        vector<int> res;
        for(auto i:tp )
        {
res.push_back(stoi(i.substr(0,2))*60+stoi(i.substr(3,2))) ;
            
        }
        sort(res.begin(),res.end());
        
        int ans=INT_MAX;
        for(int i=1;i<n;i++)
        {
            ans=min(res[i]-res[i-1],ans);
        }
        // discuss help
        ans= min(ans,res[0]-res[n-1]+24*60);
        return ans;
        
        
    }
};