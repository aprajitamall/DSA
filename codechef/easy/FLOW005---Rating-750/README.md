# FLOW005 - Rating 750

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Smallest Numbers of Notes

Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs.  **N**  is input, write a program to compute smallest number of notes that will combine to give Rs.  **N**.

### Input

The first line contains an integer  **T**, total number of testcases. Then follow  **T**  lines, each line contains an integer  **N**.

### Output

For each test case, display the smallest number of notes that will combine to give  **N**, in a new line.

### Constraints
- 1 ≤ T ≤ 1000
- 1 ≤ N ≤ 1000000
### Sample 1:
Input
Output

```
3 
1200
500
242
```

```
12
5
7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T18:18:54.722Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int deno[6]={100,50,10,5,2,1};
    while(t--)
    {
        int n;
        cin>>n;
        int total=0;
        for(int i=0;i<6;i++)
        {
            total+=n/deno[i];
            n%=deno[i];
        }
        cout<<total<<"\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLOW005)