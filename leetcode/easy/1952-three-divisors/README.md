# Three Divisors

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `n`, return `true` *if* `n` *has  **exactly three positive divisors**. Otherwise, return* `false`.

An integer `m` is a  **divisor**  of `n` if there exists an integer `k` such that `n = k * m`.

 

 **Example 1:** 

```
Input: n = 2
Output: false
Explantion: 2 has only two divisors: 1 and 2.

```

 **Example 2:** 

```
Input: n = 4
Output: true
Explantion: 4 has three divisors: 1, 2, and 4.

```

 

 **Constraints:** 

- 1 <= n <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.7 MB (beats 58.32%)  
**Submitted:** 2026-10-20T18:07:34.101Z  

```cpp
class Solution {
public:
    bool isThree(int n) {
        int i=1;
        int count=0;
        while(i<=n)
        {
            if(n%i==0)
            count++;
            i++;
        }
      return count==3;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/three-divisors/)