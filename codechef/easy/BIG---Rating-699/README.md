# BIG - Rating 699

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Big Achiever

Given $N$ students standing in a row, each student $i$ has an  **distinct**  achievement score $A_i$ provided in an array $A = [A_1, A_2, \dots, A_n]$. The array $A$ consists of distinct integers from $1$ to $N$.

A student $i$ ($1 \leq i \leq N$) will be happy if their achievement score $A_i$ is greater than the achievement scores of all the students standing before them in the array.

The task is to print whether a student is happy or not.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains $N$ — the number of students. The second line of each test case contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$, denoting the achievement scores of the students.
### Output Format
- For each test case, print a single line containing $N$ integers. Print $i^{th}$ integer as $1$ if the $i^{th}$ student is happy, otherwise print $0$.
- Each test case's output should be on a new line, with the integers separated by spaces.
### Constraints
- $1 \leq T \leq 4 \times 10^5$
- $1 \leq N \leq 10$
- $1 \leq A_i \leq N$
- The sum of $N$ over all test cases does not exceed $4 \times 10^5$.
### Sample 1:
Input
Output

```
2
5
3 1 2 4 5
4
1 2 3 4

```

```
1 0 0 1 1
1 1 1 1
```

### Explanation:

 **Test Case 1:** 

- There is no student behind student $1$, so he is happy.
- For student $2$, there is student $1$ with greater achievement score, so he is not happy.
- Similarly for student $3$, there is student $1$ with greater score, so he is not happy.
- Student $4$ has greater achievement score than student $1$, student $2$, and student $3$, so student $4$ is happy.
- Student $5$ has greater score than all other students, so he is happy.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T08:57:42.406Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    
    int max_so_far=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]>max_so_far)
      {
      cout<<1<<" ";
      max_so_far=a[i];
      }
      else
      cout<<0<<" ";}
      cout<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BIG)