# LMP2E - Rating 723

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Winter is Coming

Chef feels comfortable depending on the temperature and whether or not he is wearing a jacket.

- Chef feels comfortable without a jacket if and only if the temperature is greater than or equal to $A$.
- Chef feels comfortable with a jacket if and only if the temperature is less than or equal to $B$.
- It is guaranteed that $A \leq B$.
- Chef is not wearing a jacket initially.

You are given the temperature $T_i$ for the next $N$ days.
Chef can choose to wear or remove his jacket any number of times, but each time he puts on the jacket is counted as one action.

Find the  **minimum number of times Chef needs to wear a jacket**  so that he feels comfortable on all $N$ days.

### Input Format
- The first line contains a single integer $T$, denoting the number of test cases.
- For each test case:
- The first line contains three space-separated integers $N$, $A$, and $B$.
- The second line contains $N$ space-separated integers $T_1, T_2, \ldots, T_N$, where $T_i$ is the temperature on the $i$-th day.
### Output Format

For each test case, output a single integer — the minimum number of times Chef needs to wear a jacket.

### Constraints
- $1 \leq T \leq 10^4$
- $1 \leq N \leq 100$
- $1 \leq T_i \leq 50$
- $1 \leq A \leq B \leq 50$
### Sample 1:
Input
Output

```
2
5 20 30
15 25 35 28 10
4 10 15
12 9 15 16

```

```
2
1

```

### Explanation:

For  **Test case 1:**  $N=5, A=20, B=30$ and temperatures are $[15,25,35,28,10]$.

- Day 1: $15 < A$, Chef must wear a jacket. (wear count = 1)
- Day 2: $25$ lies in $[A,B]$, Chef can keep the jacket on.
- Day 3: $35 > B$, Chef must remove the jacket.
- Day 4: $28$ lies in $[A,B]$, Chef may stay without a jacket.
- Day 5: $10 < A$, Chef must wear a jacket again. (wear count = 2)

Minimum number of times Chef wears a jacket is $2$.

For  **Test case 2:**  $N=4, A=10, B=15$ and temperatures are $[12,9,15,16]$.

- Day 1: $12$ lies in $[A,B]$, Chef stays without a jacket.
- Day 2: $9 < A$, Chef must wear a jacket. (wear count = 1)
- Day 3: $15 \le B$, Chef keeps the jacket on.
- Day 4: $16 > B$, Chef removes the jacket.

Minimum number of times Chef wears a jacket is $1$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-04T06:10:31.679Z  

```c_cpp
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int N, A, B;
    cin >> N >> A >> B;
    
    vector<int> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }
    
    int wear_count = 0;
    bool has_jacket = false; 
    
    for (int i = 0; i < N; ++i) {
        if (T[i] < A) {
    
            if (!has_jacket) {
                wear_count++;
                has_jacket = true;
            }
        } 
        else if (T[i] > B) {
            has_jacket = false;
        }
        
    }
    
    cout << wear_count << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/LMP2E)