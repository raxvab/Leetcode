class Solution {
public:
    bool  searchMatrix(vector<vector<int>>m, int target) {
	
	int r = m.size();
	int c = m[0].size();
	
	int lo = 0, hi = r * c - 1;
	
	while(lo <= hi)
    {
		int mid = (lo+hi) / 2;
		int mid_value = m[mid/c][mid%c];
		
		if( mid_value == target){
			return true;
		
		}else if(mid_value < target){
			
			lo = mid+1;
		}else{
		hi = mid-1;
		}
	}
	
	return false;}
};
