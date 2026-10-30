# Smallest Range I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` and an integer `k`.

In one operation, you can choose any index `i` where `0 <= i < nums.length` and change `nums[i]` to `nums[i] + x` where `x` is an integer from the range `[-k, k]`. You can apply this operation  **at most once**  for each index `i`.

The  **score**  of `nums` is the difference between the maximum and minimum elements in `nums`.

Return  *the minimum  **score**  of* `nums` *after applying the mentioned operation at most once for each index in it*.

 

 **Example 1:** 

```
Input: nums = [1], k = 0
Output: 0
Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.

```

 **Example 2:** 

```
Input: nums = [0,10], k = 2
Output: 6
Explanation: Change nums to be [2, 8]. The score is max(nums) - min(nums) = 8 - 2 = 6.

```

 **Example 3:** 

```
Input: nums = [1,3,6], k = 3
Output: 0
Explanation: Change nums to be [4, 4, 4]. The score is max(nums) - min(nums) = 4 - 4 = 0.

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- 0 <= nums[i] <= 104
- 0 <= k <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 19.3 MB (beats 58.98%)  
**Submitted:** 2026-10-30T05:24:36.806Z  

```cpp
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max_v=nums[0];
        int min_v=nums[0];
        for(int n:nums)
        {
            if(max_v<n)
            max_v=n;
            if(min_v>n)
            min_v=n;
        }
        int gap=max_v-min_v-(2*k);
        if(gap<0)
        return 0;
        else
         return gap;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-range-i/)