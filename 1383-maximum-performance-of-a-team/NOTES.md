Please upvote if you like the post :)
​
Intuition:
We can notice one thing that no matter who we choose for K Engineers, we should use the minimum value of efficiency among them. So, simple we can fix the Engineer who has the minimum efficiency by sorting the whole array based on the efficiency in decreasing order.
​
Approach:
​
Let's say that efficiency[i] >= efficiency[j] where i < j.
While we iterate the array, we can assume that ith engineer should be the member of K.
So what we should do is to find out the maximum top k-1 engineer from 0 - i-1.
So we can use the min heap to keep the minimum value of speed, If the size is already k, then ith member cannot be included. So you can pop the worker who has the minimum speed.
C++: