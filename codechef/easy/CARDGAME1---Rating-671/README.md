# CARDGAME1 - Rating 671

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Card Game

There is a set of $N$ cards where each card is numbered $1$ to $N$.

Chef throws a card numbered $X$.
Find the number of ways, Chefina can chose a card from the remaining deck such that, the sum of chosen card and $X$ is  **even**.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two space-separated integers $N$ and $X$ — the number of cards and the card thrown by Chef.
### Output Format

For each test case, output on a new line, the number of ways, Chefina can chose a card from the remaining deck such that, the sum of chosen card and $X$ is  **even**.

### Constraints
- $1 \leq T \leq 10^5$
- $2 \leq N \leq 1000$
- $1 \leq X \leq N$
### Sample 1:
Input
Output

```
3
3 1
2 2
5 4

```

```
1
0
1
```

### Explanation:

 **Test case $1$:**  Chefina can only chose card numbered $3$ such that the sum is $3+1=4$, which is even.

 **Test case $2$:**  There are two cards and Chef throws card numbered $2$. Thus, Chefina cannot chose any card such that sum is even.

 **Test case $3$:**  Chefina can only chose card numbered $2$ such that the sum is $4+2=6$, which is even.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T16:42:23.127Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(x%2==0)
       cout<<n/2-1<<endl;
       else
       cout<<(n+1)/2-1<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CARDGAME1)