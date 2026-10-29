# CASHBACK - Rating 520

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Cashback

A customer is buying a cake from Chef's store for $X$ rupees.

Chef has a cashback policy, where for any purchase of at least $200$ rupees, he returns $50$ rupees as a discount.

What is the effective amount the customer paid for the cake?

### Input Format
- The first and only line contains a single integer $X$ - the price of the cake.
### Output Format

Output the effective amount paid by the customer.

### Constraints
- $100 \le X \le 500$
### Sample 1:
Input
Output

```
210

```

```
160
```

### Explanation:

Since the purchase amount is at least $200$ rupees, the customer gets a cashback of $50$ rupees.

### Sample 2:
Input
Output

```
150

```

```
150

```

### Explanation:

Since the purchase amount is not at least $200$ rupees, there is no cashback.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:35:47.469Z  

```c_cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>=200)
    cout<<x-50;
    else
    cout<<x;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CASHBACK)