class Solution {
public:
    int findDuplicate(vector<int>& a) {
int prefix[100005]={0};
        int ans;
        for(int i=0;i<=a.size()-1;i++)
        {    prefix[a[i]]++;
       
         if(prefix[a[i]]==2)
         { return a[i];
        }}
        return ans;
        
    }
};
