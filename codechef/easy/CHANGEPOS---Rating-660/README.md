# CHANGEPOS - Rating 660

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Change Row and Column Both

There is a $10 \times 10$ grid with rows numbered $1$ to $10$ from top to bottom, and columns $1$ to $10$ from left to right. Each cell is identified by a pair $(r, c)$ which means that the cell is located at row $r$ and column $c$.

If Chef's current location is $(a,b)$, then in one move Chef can go to $(c,d)$ if  **both**  of the following are satisfied:

- $a \neq c$
- $b \neq d$

If the starting cell and ending cell are the same, Chef is already at the destination and the answer is 0 moves.

Determine the minimum number of moves required to go from $(s_x, s_y)$ to $(e_x, e_y)$.

### Input Format
- The first line contains a single integer $T$ — the number of test cases. Then the test cases follow.
- The first and only line of each test case contains four integer $s_x$, $s_y$, $e_x$, $e_y$ — the coordinates of the starting and ending cells.
### Output Format

For each testcase, output the minimum number of moves required to go from $(s_x, s_y)$ to $(e_x, e_y)$.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq s_x, s_y, e_x, e_y \leq 10$
- $(s_x,s_y) \neq (e_x,e_y)$
### Sample 1:
Input
Output

```
4
1 2 9 8
5 5 5 7
8 6 6 8
3 10 8 10

```

```
1
2
1
2

```

### Explanation:

 **Test case 1:**  Chef can go from $(1, 2)$ to $(9, 8)$ in one move since $1 \neq 9$ and $2 \neq 8$.

 **Test case 2:**  Chef will require at least two moves. One such sequence of moves is $(5, 5) \rightarrow (2, 3) \rightarrow (5, 7)$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T13:38:49.083Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        if(sx==ex||sy==ey)
        cout<<2<<endl;
        else
        cout<<1<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHANGEPOS)