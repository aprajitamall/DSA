# FAIRSHARE - Rating 665

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Fair Share Settlement

You and $K$ of your friends gather for dinner at a restaurant, and the total bill is Rs. $N$. You pay the entire bill, and since everyone shared the food equally, the bill needs to be split evenly among you all.

After asking your friends to reimburse their fair shares, each person pays you back. However, if the amount to be paid back wasn't an integer, they round down to the previous integer value.
For example, if each friend should have paid Rs. $13.2$, they instead pay Rs. $13$. Even if they should have paid Rs. $13.79$, they still only pay Rs. $13$, rounding down.

Calculate the net amount that you ended up paying after everyone settles their debts.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of one line of input, containing two space-separated integers $N$ and $K$.
### Output Format

For each test case, output on a new line the net amount you paid.

### Constraints
- $1 \le T \le 10^4$
- $1 \le N \le 10^3$
- $1 \le K \le 10$
### Sample 1:
Input
Output

```
3
500 1
999 9
1 4

```

```
250
108
1

```

### Explanation:

 **Test case $1$:**  You and another friend have gone for dinner, and the total cost has come to Rs. $500$. You paid the entire amount of Rs. $500$, and then your friend repaid you by paying back Rs. $250$. Thus your net payment was $(500 - 250)$ = Rs. $250$.

 **Test case $2$:**  Each friend's fair share was $99.9$. However they round down to $99$ instead. Thus your net payment was $999 - 9 \cdot 99$ = Rs. $108$.

 **Test case $3$:**  Each friend's fair share was $0.2$, so they paid you $0$. So, the entire Rs. $1$ is your net payment.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T13:57:35.975Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int m=n/(k+1);
        cout<<n-(k*m)<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FAIRSHARE)