# DIFFSUM - Rating 749

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Sum OR Difference

Write a program to take two numbers as input and print their difference if the first number is greater than the second number $otherwise$ print their sum.

### Input Format

First line will contain two numbers, $(N1)$ and $(N2),$ separated by a space.

### Output Format

Output a single line containing the difference of 2 numbers $(N1 - N2)$ if the first number is greater than the second number otherwise output their sum $(N1 + N2)$.

### Constraints
- $-1000 \leq N1 \leq 1000$
- $-1000 \leq N2 \leq 1000$
### Sample 1:
Input
Output

```
82 28
```

```
54
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T15:05:13.627Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if(n1>n2)
    cout<<n1-n2;
    else 
    cout<<n1+n2;
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DIFFSUM)