# Contains Duplicate II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums` and an integer `k`, return `true`  *if there are two  **distinct indices*** `i` *and* `j` *in the array such that* `nums[i] == nums[j]` *and* `abs(i - j) <= k`.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,3,1], k = 3
Output: true

```

 **Example 2:** 

```
Input: nums = [1,0,1,1], k = 1
Output: true

```

 **Example 3:** 

```
Input: nums = [1,2,3,1,2,3], k = 2
Output: false

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109
- 0 <= k <= 105

## Solution

**Language:** C++  
**Runtime:** 135 ms (beats 44.59%)  
**Memory:** 142.2 MB (beats 32.67%)  
**Submitted:** 2026-11-19T16:01:42.942Z  

```cpp
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int ,int> last_seen;
        for(int i=0;i<nums.size();i++)
        {
            if(last_seen.count(nums[i])&&i-last_seen[nums[i]]<=k)
            return true;
            last_seen[nums[i]]=i;
        }
        return false;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate-ii/)