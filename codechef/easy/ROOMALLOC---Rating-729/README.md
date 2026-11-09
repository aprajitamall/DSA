# ROOMALLOC - Rating 729

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Room Allocation

Jadavpur University wants to find out the number of rooms they need to accommodate the teams coming for their fest.
A total of $N$ colleges are coming, where, the $i^{th}$ college has a team of $A_i$ members.

Each room can accommodate  **at most**  $2$ people. Moreover, people from  **different**  colleges  **dislike**  staying together.

Find the  **minimum**  number of rooms Jadavpur University will have to use to accommodate everyone, such that a room never contains people from different colleges.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains one integer, $N$, the number of colleges coming for the fest. The next line contains $N$ space-separated integers, $A_1, A_2, \ldots, A_N$, the number of people coming from each college.
### Output Format

For each test case, output on a new line, the  **minimum**  number of rooms needed to accommodate all students, such that a room never contains people from different colleges.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
2
1
1
4
4 4 4 4

```

```
1
8

```

### Explanation:

In the first test case, there is only one college attending and we need $1$ room to accommodate the $1$ person.

In the second test case, each college is sending $4$ people, and thus needs $2$ rooms. So, a total of $2 \cdot 4 = 8$ rooms are needed.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T15:27:56.414Z  

```c_cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int N;
    cin >> N;
    
    int total_rooms = 0;
    for (int i = 0; i < N; ++i) {
        int A_i;
        cin >> A_i;
       
        total_rooms += (A_i + 1) / 2; 
    }
    
    cout << total_rooms << "\n";
}

int main() {
   
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/ROOMALLOC)