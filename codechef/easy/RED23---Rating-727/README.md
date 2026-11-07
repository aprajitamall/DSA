# RED23 - Rating 727

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Number Reduction

Chef has an integer $X$ with him.
He can perform the following two types of modifications to it, however many times he likes and in any order:

- If $X \gt 3$, subtract $3$ from $X$.
- If $X$ is even, divide $X$ by $2$.

Find the minimum possible value $X$ can take after performing the given operations several times.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case will contain a single integer $X$.
### Output Format

For each test case, output on a new line the minimum value $X$ can reach.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq X \leq 100$
### Sample 1:
Input
Output

```
4
2
3
4
5

```

```
1
3
1
1

```

### Explanation:

 **Test case $1$:**  Initially, $X = 2$. Since it's even, Chef can divide it by $2$ and make $X = 1$, which is the minimum possible.

 **Test case $2$:**  Initially, $X = 3$. It's not even, so Chef can't divide it by $2$. It's also not $\gt 3$, so Chef can't subtract $3$ from it.
So, $X$ can't be changed, and its initial value, $3$, is the minimum it can reach.

 **Test case $3$:**  Initially, $X = 4$. Chef can subtract $3$ from it to obtain $X = 1$, which is minimum.

 **Test case $4$:**  Initially, $X = 5$. Chef can subtract $3$ from it to obtain $X = 2$, and then divide that by $2$ to obtain $X = 1$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T15:05:49.238Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin>>x;
    if(x%3==0)
    cout<<3<<endl;
    else
    cout<<1<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/RED23)