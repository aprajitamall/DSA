# AREAPERI - Rating 590

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Area OR Perimeter

Write a program to obtain length $(L)$ and breadth $(B)$ of a rectangle and check whether its area is greater or perimeter is greater or both are equal.

### Input Format
- First line will contain the length $(L)$ of the rectangle.
- Second line will contain the breadth $(B)$ of the rectangle.
### Output Format

Output 2 lines.

In the first line print "Area" if area is greater otherwise print "Peri" and if they are equal print "Eq".(Without quotes).

In the second line print the calculated area or perimeter (whichever is greater or anyone if it is equal).

### Constraints
- $1 \leq L \leq 1000$
- $1 \leq B \leq 1000$
### Sample 1:
Input
Output

```
1
2

```

```
Peri
6

```

### Explanation:

Area = 1 * 2 = 2
Peri = 2 * (1 + 2) = 6
Since Perimeter is greater than Area, hence the output is :
Peri
6

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-31T14:43:15.573Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    if(l*b>2*(l+b))
    {
    cout<<"Area\n";
    cout<<l*b;
    }
    else if(l*b==2*(l+b))
    {
    cout<<"Eq\n";
    cout<<l*b;}
    else
     {cout<<"Peri\n";
      cout<<2*(l+b);}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/AREAPERI)