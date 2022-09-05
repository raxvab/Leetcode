class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {
		int mid, l = 0, r = letters.size() - 1;
		while(l < r){
			mid = (l + r) / 2;
			if(letters[mid] <= target){
				l = mid + 1;
			}
			else{
				r = mid;
			}
		}
		if(letters[l] > target){
			return letters[l];
		}
		return letters[0];
	}
};