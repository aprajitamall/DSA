# EXKEYPAD

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Sticky Keypad

You are given $2$ integers $N$ and $D$.

Find the smallest integer $x$ which is

- greater than or equal to $N$
- typeable without the digit $D$.

Formally, a non-negative integer $x$ is  **typeable**  if its usual decimal representation (no leading zeros; zero is written as the single digit $0$) does not contain the digit $D$.

### Input Format
- The first line contains a single integer $T$, the number of test cases.
- Each of the next $T$ lines contains two space-separated integers $N$ and $D$.
### Output Format

For each test case, output on a new line the smallest integer $x \ge N$ typeable without digit $D$.

### Constraints
- $1 \le T \le 10^{3}$
- $1 \le N \le 10^{9}$
- $0 \le D \le 9$
### Sample 1:
Input
Output

```
5
99 9
1000 0
12345 3
7 7
2026 5
```

```
100
1111
12400
8
2026

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T15:37:20.403Z  

```c_cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    long long N;
    int D;
    cin >> N >> D;
    
    char d_char = '0' + D;
    
    while (true) {
        string s = to_string(N);
        size_t idx = s.find(d_char);
      
        if (idx == string::npos) {
            cout << s << "\n";
            return;
        }
        
        long long prefix = stoll(s.substr(0, idx + 1)) + 1;
        
       
        int rem_len = s.length() - (idx + 1);
        char fill_char = (D == 0) ? '1' : '0';
        string suffix(rem_len, fill_char);
        
        N = stoll(to_string(prefix) + suffix);
    }
}

int main() {
    
    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/EXKEYPAD)