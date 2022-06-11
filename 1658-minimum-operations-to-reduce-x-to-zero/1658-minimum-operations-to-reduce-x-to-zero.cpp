class Solution
{
    public:

        int minOperations(vector<int> &nums, int x)
        {

            int sum = accumulate(nums.begin(), nums.end(), 0);

            if (sum < x)
                return -1;
            if (sum == x)
                return nums.size();
            int t = sum - x;
            int crsum = 0;
            int start = 0;

            int maxSize = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                crsum += nums[i];

            while (crsum > t)
                    crsum -= nums[start++];

                if (crsum == t)
                    maxSize = max(maxSize, i - start + 1);
            }

            return (maxSize == 0) ? -1 : nums.size() - maxSize;
        }
};