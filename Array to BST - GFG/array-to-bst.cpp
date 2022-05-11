// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
   void bst(int i, int j, vector<int> &a, vector<int> &ans) {
        if(i <= j) {
            int mid = (i+j)/2;
            ans.push_back(a[mid]);
            bst(i, mid-1, a, ans);
            bst(mid+1, j, a, ans);
        }
    }

    vector<int> sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> ans;

bst(0, n-1, nums, ans);
        
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends