# Remove Invalid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given a string `s` that contains parentheses and letters, remove the minimum number of invalid parentheses to make the input string valid.

Return  *a list of  **unique strings**  that are valid with the minimum number of removals*. You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: s = "()())()"
Output: ["(())()","()()()"]

```

 **Example 2:** 

```
Input: s = "(a)())()"
Output: ["(a())()","(a)()()"]

```

 **Example 3:** 

```
Input: s = ")("
Output: [""]

```

 

 **Constraints:** 

- 1 <= s.length <= 25
- s consists of lowercase English letters and parentheses '(' and ')'.
- There will be at most 20 parentheses in s.

## Solution

**Language:** C++  
**Runtime:** 57 ms (beats 62.99%)  
**Memory:** 19.8 MB (beats 50.32%)  
**Submitted:** 2026-10-07T05:39:02.244Z  

```cpp
class Solution {
    private:
    bool isvalid(string &s)
    { int count=0;
        for(char c:s)
        {
            if(c=='(')
            {
              count++;
            }
            else if(c==')')
            {
                count--;
                if(count<0)
        return false;
            }
        }
        return count==0;
    }
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string>result;
        queue<string>q;
        unordered_set<string>visited;
        q.push(s);
        visited.insert(s);
        bool found=false;
        while(!q.empty())
        {
            int level_size=q.size();
            for(int i=0;i<level_size;i++)
            {
                string current=q.front();
                q.pop();
                if(isvalid(current))
                {
                    result.push_back(current);
                    found=true;
                }
                if(found)
                continue;
            
            for (int j = 0; j < current.length(); ++j) {
                    if (current[j] != '(' && current[j] != ')') continue;
                    
                    std::string next_state = current.substr(0, j) + current.substr(j + 1);
                    
                    if (visited.find(next_state) == visited.end()) {
                        visited.insert(next_state);
                        q.push(next_state);
                    }
                }
        }
                if(found)
                return result;
        }
        return result.empty() ? std::vector<std::string>{""} : result;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-invalid-parentheses/)