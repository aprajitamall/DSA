# NO25PLS - Rating 697

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Imperfect Numbers

Chef calls a  **positive**  integer  *imperfect*  if it's divisible by  **either**  $2$ or $5$, but  **not both**.

For example, $8$ and $15$ are  *imperfect*  integers, while $20$ is not.

You are given an integer $N$.
Find the  **minimum**  possible difference between $N$ and an  *imperfect*  number.

That is, find the minimum possible value of $|N - M|$ across all choices of $M$ that are  *imperfect*  numbers, where $|x|$ denotes the absolute value of $x$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a one line of input, containing a single integer $N$.
### Output Format

For each test case, output on a new line the answer: the minimum possible difference between $N$ and an imperfect number.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100$
### Sample 1:
Input
Output

```
5
1
5
20
9
14

```

```
1
0
2
1
0
```

### Explanation:

 **Test case $1$:**  $2$ is an  *imperfect*  number, because it's divisible by $2$ but not $5$.
This is the closest imperfect number to $1$, giving a difference of $|1-2| = 1$.

 **Test case $2$:**  $5$ is already an  *imperfect*  number, so the answer is $|5-5| = 0$.

 **Test case $3$:**  $20$ is not an  *imperfect*  number because it's divisible by both $2$ and $5$.
One possible option is to choose $18$ as an  *imperfect*  number, giving a difference of $|20-18| = 2$.
This is the minimum possible difference between $20$ and an imperfect number.

 **Test case $4$:**  $9$ is not an  *imperfect*  number because it's divisible by neither $2$ nor $5$.
However, $8$ is an  *imperfect*  number because it's divisible by $2$ but not $5$, and $|8-9| = 1$.
This is the minimum possible difference.

 **Test case $5$:**  $14$ is already an  *imperfect*  number, so the answer is $|14-14| = 0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T08:36:45.745Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
bool isImperfect(int m)
{
    if(m<=0)
    return false;
     return (m%2==0||m%5==0)&& !(m%2==0&&m%5==0);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int min_diff=INT_MAX;
        for(int m=n-2;m<=n+2;m++)
        {
            if(isImperfect(m))
            {
            int  curr_diff=abs(n-m);
            
            min_diff=min(curr_diff,min_diff);
            }
        }
         cout<<min_diff<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/NO25PLS)