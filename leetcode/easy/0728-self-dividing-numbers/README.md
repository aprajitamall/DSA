# Self Dividing Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A  **self-dividing number**  is a number that is divisible by every digit it contains.

- For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

A  **self-dividing number**  is not allowed to contain the digit zero.

Given two integers `left` and `right`, return  *a list of all the  **self-dividing numbers**  in the range*  `[left, right]` (both  **inclusive**).

 

 **Example 1:** 

```
Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]

```

 **Example 2:** 

```
Input: left = 47, right = 85
Output: [48,55,66,77]

```

 

 **Constraints:** 

- 1 <= left <= right <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.2 MB (beats 56.50%)  
**Submitted:** 2026-10-26T19:20:47.578Z  

```cpp
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        
        for(int i=left;i<=right;i++)
        {
            int num=i;
            bool self_dividing=true;
            while(num!=0)
            {
                if(num%10==0||i%(num%10)!=0)
                {
                    self_dividing=false;
                    break;
                }
                num=num/10;


            }
            if(self_dividing)
            res.push_back(i);
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/self-dividing-numbers/)