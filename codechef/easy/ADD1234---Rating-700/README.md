# ADD1234 - Rating 700

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Adding 123 to 4

You have:

- $X$ pieces of papers with $1$ written on it
- $Y$ pieces of paper with $2$ written on it
- $Z$ pieces of paper with $3$ written on it

You want to pair up $2$ pieces of paper such that the sum on each pair adds to $4$. How many such pairs can you make?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains $3$ integers - $X$, $Y$ and $Z$.
### Output Format

For each test case, output on a new line the maximum number of pairs that add to $4$.

### Constraints
- $1 \le T \le 100$
- $1 \le X, Y, Z \le 100$
### Sample 1:
Input
Output

```
2
2 2 1
3 3 3

```

```
2
4

```

### Explanation:

 **Test Case 1**  : You can make the following $2$ pairs:

- One paper with $1$, one paper with $3$
- Two papers with $2$ written.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-02T07:32:39.416Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int pair_1_3=min(x,z);
        int pair_2_2=y/2;
        cout<<pair_1_3+pair_2_2<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ADD1234)