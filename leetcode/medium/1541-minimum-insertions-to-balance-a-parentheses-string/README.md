# Minimum Insertions to Balance a Parentheses String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a parentheses string `s` containing only the characters `'('` and `')'`. A parentheses string is  **balanced**  if:

- Any left parenthesis '(' must have a corresponding two consecutive right parenthesis '))'.
- Left parenthesis '(' must go before the corresponding two consecutive right parenthesis '))'.

In other words, we treat `'('` as an opening parenthesis and `'))'` as a closing parenthesis.

- For example, "())", "())(())))" and "(())())))" are balanced, ")()", "()))" and "(()))" are not balanced.

You can insert the characters `'('` and `')'` at any position of the string to balance it if needed.

Return  *the minimum number of insertions*  needed to make `s` balanced.

 

 **Example 1:** 

```
Input: s = "(()))"
Output: 1
Explanation: The second '(' has two matching '))', but the first '(' has only ')' matching. We need to add one more ')' at the end of the string to be "(())))" which is balanced.

```

 **Example 2:** 

```
Input: s = "())"
Output: 0
Explanation: The string is already balanced.

```

 **Example 3:** 

```
Input: s = "))())("
Output: 3
Explanation: Add '(' to match the first '))', Add '))' to match the last '('.

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of '(' and ')' only.

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 53.42%)  
**Memory:** 15.6 MB (beats 53.60%)  
**Submitted:** 2026-10-09T13:26:13.974Z  

```cpp
class Solution {
public:
    int minInsertions(string s) {
         int open = 0;
        int addition = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                if (open < 0) {
                    addition++;
                    open = 0;
                }
                open += 2;
            } 
            else {
                if (i + 1 < n && s[i + 1] == ')') {
                    i++;
                } else {
                    addition++;
                }
                
                if (open > 0) {
                    open -= 2;
                } else {
                    addition++;
                }
            }
        }
        
        return addition + open;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/)