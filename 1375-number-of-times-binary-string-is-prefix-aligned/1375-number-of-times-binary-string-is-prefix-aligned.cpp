class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int ans=0;
        if(flips[0]==1)
            ans++;
        for(int i=1;i<flips.size();i++)
        {
            flips[i]+=flips[i-1];
long int n=i+1;
            n*=n+1;
            n/=2;
            if(flips[i]==n)
            ans++;
            }
        return ans;
    }
};