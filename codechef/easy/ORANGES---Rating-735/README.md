# ORANGES - Rating 735

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Too Many Oranges

Chef has $N$ oranges with him. Each orange has either $10, 11,$ or $12$ slices.

Chef wanted to eat  **exactly**  $K$ slices of orange. However, the oranges were too tasty, and Chef ended up eating all $N$ of them!

Chef wasn't paying attention, so he didn't count the number of slices he ate, and he also doesn't know how many slices each orange had - the only thing he knows is that each orange has either $10, 11,$ or $12$ slices.

Is it possible that Chef ate exactly $K$ slices from $N$ oranges?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input, containing two space-separated integers $N$ and $K$ — the number of oranges, and the number of slices Chef wants to eat.
### Output Format

For each test case, output on a new line the answer: `"YES"` if Chef could have eaten exactly $N$ orange slices, and `"NO"` otherwise. The output should be without quotes.

Each character of the output may be printed in either uppercase or lowercase, i.e, the strings `No`, `NO`, `nO`, and `no` will all be treated as equivalent.

### Constraints
- $1 \leq T \leq 5000$
- $1 \leq N \leq 30$
- $1 \leq K \leq 500$
### Sample 1:
Input
Output

```
5
1 10
1 9
2 21
4 48
5 49

```

```
YES
NO
YES
YES
NO

```

### Explanation:

 **Test case $1$:**  Chef ate only one orange. It's possible it had $10$ slices, so the answer is `"YES"`.

 **Test case $2$:**  Chef ate only one orange. It must've had either $10, 11,$ or $12$ slices, so there's no chance that Chef ate exactly $9$ slices.

 **Test case $3$:**  Chef ate two oranges. It's possible that one of them had $10$ slices and the other had $11$ slices, for a total of $10+11=21$.

 **Test case $4$:**  Chef ate four oranges. If all four had $12$ slices, Chef would've eaten $48$ slices.

 **Test case $5$:**  Chef ate five oranges. It can be shown that there's no way for Chef to have eaten five oranges and yet have eaten exactly $49$ slices.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-14T12:33:47.654Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std ;
void solve()
{
    int n, k;
    cin >> n >> k;
    
   
    if (k >= 10 * n && k <= 12 * n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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

[View on CodeChef](https://www.codechef.com/problems/ORANGES)