# FAIL - Rating 697

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Failing Grades

Chef took $N$ total tests in his university, numbered $1$ to $N$ chronologically. Each was graded out of $100$ marks. He scored $A_i$ marks in the $i$-th test.

Chef's scholarship requires that his average remains at or above $40$ marks after taking each test. Was Chef able to keep his scholarship? Print Yes or No accordingly.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains $N$ - the number of tests. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line $\text{Yes}$ if Chef was able to keep his scholarship and $\text{No}$ otherwise.

It is allowed to print each character in either case, i.e. $\text{YES}$, $\text{yes}$, $\text{yES}$ will all be accepted as a positive response.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $0 \le A_i \le 100$
### Sample 1:
Input
Output

```
4
2
0 100
3
41 39 40
4
41 41 28 100
1
100

```

```
No
Yes
No
Yes
```

### Explanation:

 **Test case 1**  : Chef's average dropped below $40$ after the first test itself, so he immediately loses the scholarship. His average becomes $50$ later on, however this does not matter.

 **Test Case 2**  : Chef's average after the first test is $41$, and after the second and third tests are both $40$. Hence, at all times, his average was at or above $40$, so he does not lose his scholarship.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T06:37:25.590Z  

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
        int a[n];
        int sum=0;
        int flag=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(sum<40*(i+1))
            {
              flag=0;
            
            }
        
        }
        if(flag==1)
        cout<<"yes\n";
        else
        cout<<"no\n";
    
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FAIL)