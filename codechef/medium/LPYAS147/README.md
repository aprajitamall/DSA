# LPYAS147

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T11:19:43.179Z  

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

[View on CodeChef](https://www.codechef.com/problems/LPYAS147)