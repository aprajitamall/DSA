# VAL142 - Rating 729

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Valentine Gifts

Chef is planning to gift something to Chefina on each of the $7$ days of valentine week. He has a total budget of $X$ rupees.

Find whether he can plan a series of gifts such that:

- Each gift has a positive value;
- The value of a gift is at least twice the value of previous gift.

Note that we do not consider any previous gift for the first gift, and thus the first gift can be of any positive value.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single integer $X$, denoting the budget of Chef.
### Output Format

For each test case, output on a new line, `YES`, if Chef can plan a series of gifts such that each gift is  **at least twice**  the value of previous gift. Otherwise, print `NO`.

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq T \leq 500$
- $1 \leq X \leq 500$
### Sample 1:
Input
Output

```
3
100
350
500

```

```
NO
YES
YES

```

### Explanation:

 **Test case $1$:**  It can be shown that Chef cannot plan a series of gifts with given conditions.

 **Test case $2$:**  Consider the array $[2, 5, 10, 20, 40, 80, 193]$ denoting the value of gift on each day. Note that each gift has positive value and the value is at least twice that of the previous gift.
Also, the total value is $350$ which is within Chef's budget.

 **Test case $3$:**  Consider the array $[2, 5, 10, 20, 40, 80, 193]$ denoting the value of gift on each day. Chef is left with $150$ rupees while satisfying all conditions.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T14:26:13.035Z  

```c_cpp
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>=127)
        cout<<"yes\n";
        else
        cout<<"no\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/VAL142)