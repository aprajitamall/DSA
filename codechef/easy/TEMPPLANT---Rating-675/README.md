# TEMPPLANT - Rating 675

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Plant

You know, that for the $i$-th of the next $N$ days, the temperature will be $A_i$.

You have a seed for a tree that needs $2$ days to grow. The height of the tree will be the minimum of the temperatures on the $2$ days of growing time.

Find the maximum possible height of the tree if you choose to optimally plant it's seed it at the correct time (within the first $N - 1$ days).

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum height of the tree.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
2
2
5 7
3
4 7 6

```

```
5
6

```

### Explanation:

 **Test Case 1:**  Just plant the seed on day $1$, and it will grow to be height $\min(5, 7)$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T17:00:17.124Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int max_height=0;
        for(int i=0;i<n-1;i++)
        {
            int curr_h=min(a[i],a[i+1]);
            max_height=max(max_height,curr_h);
        }
        cout<<max_height<<endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/TEMPPLANT)