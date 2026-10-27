# PASSPRO - Rating 660

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Password protection

Chef represents a password using a list of integers.

To check the password, Chef calculates a score:

- Add all the numbers in the list.
- Subtract the length of the list from this sum.

If the final score is $0$, the password is $SECURE$, otherwise it is $NOT\ SECURE$.

## Function Declaration
### Function Name

$checkPassword$

### Parameters
- $arr$ : An array of integers representing the password.
- $n$ : An integer representing the size of the array.
### Return Value
- Returns a string — $SECURE$ if the computed result is $0$.
- Returns $NOT\ SECURE$ if the result is not $0$.
## Constraints
- $1 \le n \le 1000$
- $0 \le arr[i] \le 100$
### Input Format
- The first line contains an integer $n$, the number of elements.
- The second line contains $n$ integers.
### Output Format
- Print "SECURE" if the result is 0
- Otherwise, print "NOT SECURE"
### Sample 1:
Input
Output

```
3
1 1 1
```

```
SECURE
```

### Explanation:

Total sum = 1+1+1 = 3
Total number of elements = 3
score => 3-3 = 0, password is secured.

### Sample 2:
Input
Output

```
2
5 5
```

```
NOT SECURE
```

### Explanation:

Total sum = 5+5 = 10
Total number of elements = 2
score => 10-2 = 8, password is not secured.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T06:55:07.310Z  

```c_cpp
string checkPassword(int arr[], int n) {
    // write your code here
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    if(sum-n==0)
    return "SECURE";
    else
     return "NOT SECURE";
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PASSPRO)