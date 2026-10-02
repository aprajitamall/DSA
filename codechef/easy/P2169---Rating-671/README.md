# P2169 - Rating 671

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Opposite Attract

You are given a binary string $S$ of length $N$. Your task is to generate a new binary string $T$ of the same length such that each corresponding character of $T$ is different from the character at the same position in $S$.

In other words, for each position $i$ ($0 ≤ i < N$), the following condition must hold $T_i ≠ S_i$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains one integer $N$ — the length of $S$. The next line contains the binary string $S$.
### Output Format

For each test case, output on a new line a binary string $T$ of length $N$, where $T_i ≠ S_i$ for all valid indices $i$.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 10$
- $S$ is a binary string, i.e, contains only the characters $0$ and $1$.
- The sum of $N$ over all test cases won't exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
4
1
0
1
1
3
101
4
0011
```

```
1
0
010
1100
```

### Explanation:

 **Test case $4$:**  $T \xrightarrow{} [1100]$, since $T_0 \neq S_0$, $T_1 \neq S_1$, $T_2 \neq S_2$ and $T_3 \neq S_3$, $T$ is a valid output.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T16:49:45.518Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
    
    cout << s << "\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/P2169)