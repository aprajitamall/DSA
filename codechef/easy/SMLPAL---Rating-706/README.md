# SMLPAL - Rating 706

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Small Palindrome

Chef has $X$ ones ($1$s) and $Y$ twos ($2$s) in his collection. He wants to arrange all of them into the  **smallest possible palindrome number$^{\dagger}$**  using  **all**  of these ones ($1$s) and twos ($2$s).

Help Chef with the answer.

Note: $X$ and $Y$ are both even numbers.

$^{\dagger}$A  **palindromic number**  is a number that remains the same when its digits are reversed.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case will contain two space-separated integers $X$, and $Y$ — the amount of ones ($1$s) and twos ($2$s) respectively.
### Output Format

For each test case, output on a new line the  **smallest possible palindrome number**  using $X$ ones (1s) and $Y$ twos (2s).

### Constraints
- $1\le T \le50$
- $0\le X, Y \le10$
- $X$ and $Y$ are both even
- $2\le X+Y \le10$
### Sample 1:
Input
Output

```
2
2 0
2 2

```

```
11
1221
```

### Explanation:

 **Test case $1$:**  The only palindrome number that can be formed using $2$ ones ($1$s) is $11$.

 **Test case $2$:**  Two possible palindromic numbers can be formed using $2$ ones ($1$s) and $2$ twos ($2$s) which are $1221$ and $2112$.
The smaller palindromic number is $1221$, so that is the answer for this case.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T17:39:58.027Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    string half_one(x/2,'1');
    string all_two(y,'2');
    cout<<half_one+all_two+half_one<<endl;
}
int main()
{ int t;
cin>>t;
while(t--)
{
    solve();
}
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SMLPAL)