**Approaches**
​
First we'll iterate through the queries
one loop for oqueries
one loop for nums sum and this sum pb to answer array
int val = q[0], idx = q[1];
// if original nums[idx] is even, then we deduct it from evenSum
if (nums[idx] % 2 == 0) evenSum -= nums[idx];
// in-place update nums
nums[idx] += val;
// check if we need to update evenSum for the new value
if (nums[idx] % 2 == 0) evenSum += nums[idx];
// then we have evenSum after this query, push it to ans
ans.push_back(evenSum);