# ADDPOS - Rating 719

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Add to make Positive

An array $A$ of length $N$ is called good if the sum of all it's elements is non-negative, i.e. $(A_1 + A_2 + \ldots + A_{N}) \ge 0$.

Find the minimum non-negative integer $X$ such that if you add $X$ to each element of the array, the array becomes good. That is, an array $B$ of length $N$, defined as $B_i = A_i + X$, is good.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the minimum $X$ needed.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $-100 \le A_i \le 100$
### Sample 1:
Input
Output

```
4
3
1 -5 -3
2
-2 -2
1
5
1
0

```

```
3
2
0
0
```

### Explanation:

 **Test Case 1**  : If we add $3$ to all elements, we get the array $[4, -2, 0]$ which has a sum of $2$, a non-negative number. It can be shown that smaller $X$ does not satisfy the condition.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T12:52:05.418Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>=0)
    cout<<0<<"\n";
    else{
    long long target=-sum;
    long long x=(target+n-1)/n;
    cout<<x<<endl;}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ADDPOS)