# PHNCHRG - Rating 680

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### A - Phone Charging

You want to charge your phone. Its current battery level is $x$ percent.

If the current battery level is less than $80$ percent, increasing it by $1$ percent takes $a$ seconds. If the current battery level is at least $80$ percent, increasing it by $1$ percent takes $b$ seconds.

Find the total number of seconds needed for the battery level to reach $100$ percent.

### Input Format

The first line contains a single integer $t$ — the number of test cases. The description of the test cases follows.

Each test case consists of a single line containing three integers $x$, $a$, and $b$ — the current battery level and the times needed to increase it by $1$ percent below and at or above $80$ percent, respectively.

### Output Format

For each test case, print a single integer — the number of seconds needed for the battery level to reach $100$ percent.

### Constraints
- $1 \le t \le 100$
- $0 \le x \le 100$
- $1 \le a \lt b \le 100$
### Sample 1:
Input
Output

```
5
0 1 2
79 7 10
80 3 8
99 1 100
100 99 100

```

```
120
207
160
100
0

```

### Explanation:

In the first test case, charging from $0$ percent to $80$ percent takes $1$ second for each percent, which is $80$ seconds in total. Charging from $80$ to $100$ takes $2$ seconds per percent, for $2\cdot 20 = 40$ seconds in total.
The sum is $80+40 = 120$ seconds.

In the second test case, charging from $79$ percent to $80$ percent takes $7$ seconds. Each of the remaining $20$ percent takes $10$ seconds each, so the total time is $7+20 \cdot 10=207$ seconds.

In the fifth test case, the phone is already at $100$ percent, so the required time is $0$ seconds.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-01T16:01:26.122Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,a,b;
        cin>>x>>a>>b;
        int total=0;
        if(x<80)
        cout<<(80-x)*a+(20*b)<<endl;
        else
        cout<<(100-x)*b<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PHNCHRG)