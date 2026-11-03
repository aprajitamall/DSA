# XYZ343 - Rating 720

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Savings Account

Considering the new budget, Chef decided to keep all his money in a savings account.

Chef has $X$ income sources where he gets $Y$ rupees from each source. However, due to bank restrictions, Chef can keep  **at most**  $Z$ rupees in the savings account.

Find the  **minimum**  number of income sources Chef should reduce to maximise his savings without exceeding the account's limit.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of three space-separated integers $X, Y,$ and $Z$ — the number of income sources, amount received from each source and the maximum limit of savings account respectively.
### Output Format

For each test case, output on a new line, the  **minimum**  number of income sources Chef should reduce to maximise his savings without exceeding the account's limit.

### Constraints
- $1 \leq T \leq 10^4$
- $1 \leq X, Y \leq 10$
- $1 \leq Z \leq 100$
### Sample 1:
Input
Output

```
3
1 2 4
2 4 6
3 10 12

```

```
0
1
2

```

### Explanation:

 **Test case $1$:**  Chef can store a maximum of $4$ rupees in his bank account. He has $1$ income source from where he gets $2$ rupees. Since the total income is not more than the limit of account, he does not need to decrease any income source.

 **Test case $2$:**  Chef can store a maximum of $6$ rupees in his bank account. He has $2$ income sources from where he gets $4$ rupees each. Currently the total income is more than the limit of account.
Chef will reduce one income source so that his total income becomes $4$ rupees which lies within the limit of account.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T14:29:40.110Z  

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
        int maxs=z/y;
        if(maxs>x)
        maxs=x;
        int reduce=x-maxs;
        cout<<reduce<<endl;
        
        
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/XYZ343)