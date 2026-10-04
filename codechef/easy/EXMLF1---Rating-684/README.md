# EXMLF1 - Rating 684

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### EXML Race

 **EXML**  is back with a bang!

$N$ AI-driven cars (labeled from $1$ to $N$) are racing on a circular track.
The race was going well until some cars crashed into each other; as a result of which all the cars got damaged and stopped working in the middle of the race.

The Exun committee has to declare a winner regardless of the crashes.
They were able to obtain two measurements for each car: the total distance (in meters) it traveled before getting damaged, and the time (in seconds) it took to cover this distance.
For the $i$-th car, these are represented by the values $d_i$ and $t_i$, respectively.
It is guaranteed that $d_i$ is a multiple of $t_i$.

The committee has decided to simply declare the fastest car to be the winner.
Your task is to determine the fastest car and output its label.

You may assume that each car travels at a constant speed.
If there are multiple fastest cars, report the one among them with  **minimum label**.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains a single integer $N$ — the number of cars. The next $N$ lines describe the measurements of the cars. The $i$-th line contains two space-separated integers $d_i$ and $t_i$, denoting the distance traveled and time take by the $i$-th car.
### Output Format

For each test case, output on a new line the answer: the label of the fastest car.
If there are multiple fastest cars, report the one among them with  **minimum label**.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100$
- $1 \leq t_i \leq d_i \leq 100$
- For each $i$, $d_i$ is a multiple of $t_i$.
### Sample 1:
Input
Output

```
5 
2
12 3
18 9
3
15 5
10 5
20 5
4
6 6
12 4
8 4
18 6
1
10 10
7
64 16
91 7
98 7
99 11
42 3
13 1
50 5
```

```
1
3
2
1
3
```

### Explanation:

 **Test case $1$:**  There are two cars:

- The first car traveled a distance of $12$ meters and took $3$ seconds to do so. So, its speed equals $\frac{12}{3} = 4$ meters per second.
- The second car traveled a distance of $18$ meters and took $9$ seconds to do so. So, its speed equals $\frac{18}{9} = 2$ meters per second.

The first car has a higher speed, so the answer is $1$.

 **Test case $2$:**  There are three cars, with their speeds (in meters/second) being $3, 2,$ and $4$.
The third car has the highest speed, so we output $3$.

 **Test case $3$:**  The are four cars, with speeds $1, 3, 2,$ and $3$.
The second and fourth cars both have the highest speeds; hence we output the one with minimum label among them which is $2$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T07:34:16.075Z  

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
        int d[n],p[n];
        for(int i=0;i<n;i++)
        {
            
            cin>>d[i]>>p[i];
        }
       int max_s=d[0]/p[0];
       int no=0;
       for(int i=1;i<n;i++)
       {
           if(d[i]/p[i]>max_s)
           {
           max_s=d[i]/p[i];
           no=i;
           }
       }
       cout<<no+1<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXMLF1)