# LONGQUEUE - Rating 719

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Long Queue

Unfortunately as soon as Sushil reached the sweet shop, he saw there was a huge queue. At first, Sushil joins at the end of the line. But he is impatient and now has decided to bully people in front of him, by flexing his wealth, so that they let him proceed.

There are $N$ people in the line, with the $i$-th person having a wealth of Rs. $A_i$. Sushil is currently the $N$-th person in this line.

Everytime Sushil sees that the person directly in front of him has a wealth less than or equal to  **half**  of his own wealth, Sushil will bully him out of the line, and the queue will reduce by $1$. Note that Sushil can only bully the person directly infront of him.

More formally, if Sushil has wealth $X$, he can bully people with wealth smaller than or equal to $\frac{X}{2}$. Find the final position of Sushil.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of input contains $N$ - the number of people in the queue including Sushil. The second line contains $N$ integers - $A_1, A_2,...., A_N$, the wealths of all the people in the queue.
### Output Format

For each test case, output on a new line the final position of Sushil after he finishes bullying people.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
3
5
1 4 5 2 10
3
2 3 5
4
2 10 4 8

```

```
1
3
3
```

### Explanation:

 **Test case 1**  : Sushil can bully everybody one by one because his wealth is $10$ and the maximum other weight is only $5$. Thus, Sushil reaches position $1$ in the queue.

 **Test case 2**  : Sushil cannot bully the $2$nd person in the queue, who is just in front of him. He can bully the $1$st person, however he is not directly in front of Sushil.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T18:22:12.766Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s_wealth=a[n-1];
    int pos=n;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<=s_wealth/2)
        pos--;
        else
        break;
    }
    cout<<pos<<"\n";
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

[View on CodeChef](https://www.codechef.com/problems/LONGQUEUE)