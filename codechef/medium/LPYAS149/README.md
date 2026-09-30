# LPYAS149

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program that takes an integer  **T**  for number of test cases as input, then for each test case reads an integer  **N**  on next  **T**  lines, and prints  **N + 1**  for each test case.

### Sample 1:
Input
Output

```
3
4
2
-1
```

```
5
3
0
```

### Explanation:

The first integer $3$ denotes the number of test cases, $T$. Next $3$ integers $4$, $2$ and $-1$ are the values of $N$ for each test case.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T11:19:41.629Z  

```py
# cook your dish here
import sys
def main():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t=int(input_data[0])
    for i in range(1,t+1):
        n=int(input_data[i])
        print(n+1)
if __name__=='__main__': 
    main()
```

---

[View on CodeChef](https://www.codechef.com/problems/LPYAS149)