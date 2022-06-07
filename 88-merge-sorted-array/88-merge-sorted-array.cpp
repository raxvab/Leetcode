class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=n+m-1;
        n--;
        m--;
        while (n>=0 && m>=0)
        {
            if (nums1[m]>nums2[n])
            {
                nums1[k]=nums1[m];
                m--;
            }
            else
            {
                nums1[k]=nums2[n];
                n--;
            }
            k-=1;
        }
        while (n>=0)
        {
            nums1[k]=nums2[n];
            n--;
            k--;
        }
    }
};