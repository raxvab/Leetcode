class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> v;
            sort(arr.begin(),arr.end());
        int minn=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
         minn=min(minn,arr[i+1]-arr[i]);
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==minn)
                v.push_back({arr[i],arr[i+1]});
            
        }
        return v;
    }
};