class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        long long int sa=0,sb=0;
        sa= accumulate(aliceSizes.begin(),aliceSizes.end(),0);
                sb= accumulate(bobSizes.begin(),bobSizes.end(),0);
int z=(sb-sa)/2;
       for(auto i:aliceSizes)
	  if(find(bobSizes.begin(), bobSizes.end(),i+z)!=bobSizes.end()) return {i,i+z};
	return {0,0};
        
    }
};