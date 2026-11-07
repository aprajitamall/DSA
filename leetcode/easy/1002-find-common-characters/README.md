# Find Common Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string array `words`, return  *an array of all characters that show up in all strings within the* `words` *(including duplicates)*. You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: words = ["bella","label","roller"]
Output: ["e","l","l"]

```

 **Example 2:** 

```
Input: words = ["cool","lock","cook"]
Output: ["c","o"]

```

 

 **Constraints:** 

- 1 <= words.length <= 100
- 1 <= words[i].length <= 100
- words[i] consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.5 MB (beats 41.87%)  
**Submitted:** 2026-11-07T15:11:26.233Z  

```cpp
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         vector<int> min_freq(26, 0);
        for (char c : words[0]) {
            min_freq[c - 'a']++;
        }
        
        for (string word : words) {
            vector<int> current_freq(26, 0);
            for (char c : word) {
                current_freq[c - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                min_freq[i] = min(min_freq[i], current_freq[i]);
            }
        }
        
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            for (int count = 0; count < min_freq[i]; count++) {
                result.push_back(string(1, 'a' + i));
            }
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-common-characters/)