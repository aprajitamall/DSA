# CANDYTYPE - Rating 723

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Candy Types

The candies in this universe come in $N$ colours, numbered $1$ to $N$.

You have $N$ candies with you, the $i$-th candy having a colour $A_i$.

You wonder what is the most frequent colour among your candies. In case there is a tie, you should print the smaller colour among all the most frequent colours.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the most frequent colour of your candies.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $1 \le A_i \le N$
### Sample 1:
Input
Output

```
3
3
1 2 3
3
3 3 3
5
3 3 4 4 1

```

```
1
3
3

```

### Explanation:

 **Test Case 1**  : All the candy colours from $1$ to $3$ appear exactly once, but we should print the smallest one, which is $1$.

 **Test Case 2**  : Only candy colour $3$ appears, hence it is the most frequent.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-06T15:39:08.834Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
   vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int color;
        cin >> color;
        freq[color]++;
    }
    
    int most_frequent_color = 1;
    int max_count = 0;
    
    
    for (int color = 1; color <= n; color++) {
        if (freq[color] > max_count) {
            max_count = freq[color];
            most_frequent_color = color;
        }
    }
    
    cout << most_frequent_color << "\n";
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

[View on CodeChef](https://www.codechef.com/problems/CANDYTYPE)