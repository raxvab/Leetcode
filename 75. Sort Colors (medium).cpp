class Solution {
public:
    void sortColors(vector<int>& arr) {
        
 int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
 int n=arr.size();
    
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
 
    i = 0;

    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
 
  
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }

    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
    }
};
