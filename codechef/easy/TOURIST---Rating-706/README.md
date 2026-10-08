# TOURIST - Rating 706

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Tourist

Chef is now a tourist in a foreign land. The land can be modelled as an infinite $2$-D grid.

Chef is currently at $(A, B)$. There are $N$ attractions, the $i$-th attraction at coordinate $(X_i, Y_i)$.

Chef wants to visit $1$ attraction, but he does not care which one. Find the minimum distance Chef needs to travel to reach some attraction.

Here, the distance is measured by the Manhattan Metric, where Chef can only travel along parallel to one of the axes. For example, the distance between $(0, 0)$ and $(1, 1)$ is $2$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains $3$ integers - $N, A$ and $B$. The next $N$ lines contain $2$ integers each, the $i$-th one being $X_i$ and $Y_i$.
### Output Format

For each test case, output on a new line the distance to the closest attraction.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $0 \le A, B \le 100$
- $0 \le X_i, Y_i \le 100$
### Sample 1:
Input
Output

```
3
1 0 0
1 1
5 50 50
50 49
49 50
50 51
51 50
50 50
2 50 50
100 100
0 1

```

```
2
0
99
```

### Explanation:

 **Test Case 1**  : Chef can only visit the attraction at $(1, 1)$, which is distance $2$ as mentioned in the statement.

 **Test Case 2**  : Chef is located at the same point as an attraction. Thus, the minimum distance is $0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T17:46:53.238Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int min_d=INT_MAX;
    for(int i=0;i<n;i++)
    {
    int x,y;
    cin>>x>>y;
    int curr_d=abs(a-x)+abs(b-y);
    min_d=min(min_d,curr_d);
    }
    cout<<min_d<<endl;
    
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

[View on CodeChef](https://www.codechef.com/problems/TOURIST)