# EXPENSES - Rating 719

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Expense List

Chef has made a list for his monthly expenses. The list has $N$ expenses with index $1$ to $N$. The money spent on each expense depends upon the monthly income of Chef.

- Chef spends $50\%$ of his total income on the expense with index $1$.
- The money spent on the $i^{th}$ expense $(i>1)$ is equal to $50\%$ of the amount remaining, after paying for all expenses with indices less than $i$.

Given that Chef earns $2^X$ rupees in a month, find the amount he saves after paying for all $N$ expenses.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two space-separated integers $N$ and $X$ — where $N$ denotes the number of expenses and $2^X$ denotes the monthly income of Chef.
### Output Format

For each test case, output on a new line, the amount saved by Chef after paying for all $N$ expenses.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N\lt X \leq 20$
### Sample 1:
Input
Output

```
4
1 2
1 3
2 3
3 4

```

```
2
4
2
2
```

### Explanation:

 **Test case $1$:**  The number of expenses are $1$ and Chef's monthly income is $2^2 = 4$.
Chef spends $50\%$ of his monthly income, that is, $2$ on first expense and saves the remaining amount $4-2 = 2$.

 **Test case $2$:**  The number of expenses are $1$ and Chef's monthly income is $2^3 = 8$.
Chef spends $50\%$ of his monthly income, that is, $4$ on first expense and saves the remaining amount $8-4 = 4$.

 **Test case $3$:**  The number of expenses are $2$ and Chef's monthly income is $2^3 = 8$.

- Chef spends $50\%$ of his monthly income, that is, $4$ on first expense. The remaining amount is $8-4=4$.
- Chef spends $50\%$ of the remaining amount, that is, $2$ on his second expense. The remaining amount is $4-2=2$ which goes into his savings.

 **Test case $4$:**  The number of expenses are $3$ and Chef's monthly income is $2^4 = 16$.

- Chef spends $50\%$ of his monthly income, that is, $8$ on first expense. The remaining amount is $16-8=8$.
- Chef spends $50\%$ of the remaining amount, that is, $4$ on second expense. The remaining amount is $8-4=4$.
- Chef spends $50\%$ of the remaining amount, that is, $2$ on his third expense. The remaining amount is $4-2=2$ which goes into his savings.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T15:17:58.559Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    int savings=1<<(x-n);
    cout<<savings<<"\n";
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

[View on CodeChef](https://www.codechef.com/problems/EXPENSES)