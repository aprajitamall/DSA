# ALRMALRT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Alarm Alert

You have two alarms. The first one rings at times $X, 2X, 3X, \ldots$, and the second one rings at times $Y, 2Y, 3Y, \ldots$.

You have a tolerance of $D$. You will wake up at the  *earliest*  time $t \gt 0$ such that:

- at least one alarm rings at time $t$, and
- the other alarm also rang at some time $s \gt 0$ with $s \leq t$ and $t - s \leq D$.

That is, you will wake up at the first instant of time that both alarms ring within $D$ seconds of each other.
Both alarms may ring at the same time.

Find the time at which you wake up. It can be proved that you will always wake up within a finite amount of time.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input, containing three space-separated integers $X$, $Y$, and $D$ — the periods of the two alarms and your tolerance.
### Output Format

For each test case, output on a new line the time at which you wake up.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq X, Y \leq 10^6$
- $0 \leq D \lt \min(X, Y)$
- The sum of $X$ over all test cases does not exceed $10^6$.
- The sum of $Y$ over all test cases does not exceed $10^6$.
### Sample 1:
Input
Output

```
5
3 5 0
2 3 1
6 8 2
9 9 0
987799 975780 200

```

```
15
3
8
9
4731557220

```

### Explanation:

 **Test case $1$:**  Since $D = 0$, both alarms must ring at the same time. The first rings at times $3, 6, 9, 12, 15, \ldots$ and the second at times $5, 10, 15, \ldots$, so you wake up at time $15$.

 **Test case $2$:**  The second alarm rings at time $3$, and the first one rang at time $2$, with $3 - 2 = 1 \leq D$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-04T15:25:49.734Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    while(b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
long long extgcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long d = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

void solve() {
    long long X, Y, D;
    cin >> X >> Y >> D;

    long long g = gcd(X, Y);
    long long ans = -1;
    for (long long k = 0; k <= D; k++) {
        if (k % g != 0) continue;

       
        long long x0, y0;
        extgcd(X, Y, x0, y0); 
        
        
        long long a = x0 * (k / g);
        long long b = -y0 * (k / g);
        
        long long step_a = Y / g;
        long long step_b = X / g;

       
        long long shift = max((1 - a + step_a - 1) / step_a, (1 - b + step_b - 1) / step_b);
        a += shift * step_a;
        b += shift * step_b;
long long shift_down = min((a - 1) / step_a, (b - 1) / step_b);
        a -= shift_down * step_a;
        b -= shift_down * step_b;

        if (a > 0 && b > 0 && a * X - b * Y == k) {
            long long t = a * X;
            if (ans == -1 || t < ans) {
                ans = t;
            }
        }

        
        a = -x0 * (k / g);
        b = y0 * (k / g);

        shift = max((1 - a + step_a - 1) / step_a, (1 - b + step_b - 1) / step_b);
        a += shift * step_a;
        b += shift * step_b;
        shift_down = min((a - 1) / step_a, (b - 1) / step_b);
        a -= shift_down * step_a;
        b -= shift_down * step_b;

        if (a > 0 && b > 0 && b * Y - a * X == k) {
            long long t = b * Y;
            if (ans == -1 || t < ans) {
                ans = t;
            }
        }
    }

    cout << ans << "\n";
   
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

[View on CodeChef](https://www.codechef.com/problems/ALRMALRT)