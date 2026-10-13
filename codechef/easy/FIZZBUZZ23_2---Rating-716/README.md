# FIZZBUZZ23_2 - Rating 716

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Survival Time

The apocalypse has arrived, and Alice and her $4$ other family members (a total of $5$ people) are now stuck in a shopping mall from where they have nowhere to run.
Fortunately, the place where they are stuck has frozen buns which they can eat and survive.

There are $N$ buns in the mall, and each member of the family needs to eat $X$ buns everyday to survive.
After the food supply runs out, the family can survive for a further $D$ days.

How many days can Alice and family survive under these conditions?

 **Note** : If there aren't enough buns to feed the whole family, nobody will eat anything. The samples below showcase an example of this.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains three space-separated integers $N, X,$ and $D$ — the total number of frozen buns, the number of buns every member needs everyday, and the number of days everyone can survive after food gets exhausted, respectively.
### Output Format

For each test case, output on a new line the total number of days Alice and family can survive.

### Constraints
- $1 \leq T \leq 10^5$
- $0 \leq N \lt 500$
- $1 \leq X \leq 10$
- $0 \leq D \lt 20$
### Sample 1:
Input
Output

```
2
50 2 10
120 5 15

```

```
15
19
```

### Explanation:

 **Test case $1$:**  There are $50$ buns, and each person requires $2$ per day; so the overall requirement is $10$ buns per day.
This allows the bun stock to last for $5$ days, after which the family can survive for an additional $10$ days for a total of $15$.

 **Test case $2$:**  There are $120$ buns, and each person requires $5$ per day; so the overall requirement is $25$ buns per day.
After $4$ days, there will be $125 - 4\cdot 25 = 20$ buns remaining.
This is not enough to feed everyone, so nobody will eat and the family will only survive for $D=15$ days more; for a total of $4+15=19$ days.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T18:53:51.639Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,d;
    cin>>n>>x>>d;
    cout<<n/(x*5)+d<<endl;
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

[View on CodeChef](https://www.codechef.com/problems/FIZZBUZZ23_2)