# Convert a Number to Hexadecimal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a 32-bit integer `num`, return  *a string representing its hexadecimal representation*. For negative integers, two’s complement method is used.

All the letters in the answer string should be lowercase characters, and there should not be any leading zeros in the answer except for the zero itself.

 **Note:** You are not allowed to use any built-in library method to directly solve this problem.

 

 **Example 1:** 

```
Input: num = 26
Output: "1a"

```

 **Example 2:** 

```
Input: num = -1
Output: "ffffffff"

```

 

 **Constraints:** 

- -231 <= num <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.8 MB (beats 71.40%)  
**Submitted:** 2026-11-01T16:07:25.577Z  

```cpp
class Solution {
public:
    string toHex(int num) {
         if (num == 0) return "0";
    
    string hex_chars = "0123456789abcdef";
    string result = "";
    unsigned int n = num;
    
    while (n > 0) {
        int rem = n & 15;
        result += hex_chars[rem];
        n >>= 4;
    }
    
    reverse(result.begin(), result.end());
    return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/convert-a-number-to-hexadecimal/)