class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // may be it become a loop of ADDITION IF the ending digit is 9
        
        for(int i = digits.size() - 1;i >= 0;i--){
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }
            else
                digits[i] = 0;
        }
        
        // learned a new thing the how to insert an element in the beginning
        // here if in case qall the digits somehow added upto 9 and a carry was taken ecverytime then we insert a 1 in the beginning
         digits.insert(digits.begin(),1);
        return digits;
       
    }
};