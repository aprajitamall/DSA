# FARMLEGS - Rating 709

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Legs on a Farm

After a long and fulfilling career, Chef has decided to retire to a farm out in the countryside.

This farm has several cows and chickens, but Chef doesn't know exactly how many of each there are — he can only see that there are $N$ legs in total across all the animals.
Note that each cow has $4$ legs and each chicken has $2$ legs, and it is guaranteed that $N$ is even.

With $N$ legs in total, what's the  **minimum**  possible number of animals that can be present on the farm?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case will contain a single integer $N$ - the number of legs.
### Output Format

For each test case, output on a new line the minimum possible number of animals that can be present on the farm.

### Constraints
- $1 \leq T \leq 1000$
- $2 \leq N \leq 2000$
- $N$ is even.
### Sample 1:
Input
Output

```
3
2
4
6

```

```
1
1
2

```

### Explanation:

 **Test case $1$:**  With $N = 2$ legs present, the only possibility is for there to be one chicken and no cows; for one animal in total.

 **Test case $2$:**  With $N = 4$ legs present, either there should be one cow or two chickens. The minimum is thus $1$.

 **Test case $3$:**  With $N = 6$ legs present, the minimum number of animals is $2$ (one cow and one chicken).

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T05:41:14.678Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<n/4+ (n%4)/2<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FARMLEGS)