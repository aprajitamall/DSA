# ITHBITSET - Rating 550

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Is the i-th bit set

You are given two integers, $n$ and $i$. Your task is to determine whether the  **$i^{th}$ bit**  (0-indexed from the least significant bit) in the  **binary form of n**  is $1$. Return $true$ if the bit is set, otherwise return $false$.

## Function Declaration
### Function Name

$\text{isBitSet}$ – This function checks whether the $i^{th}$ bit (0-indexed from the least significant bit) in the binary representation of an integer $n$ is set.

### Parameters
- $n$: An integer whose binary representation is to be examined.
- $i$: An integer indicating the bit position (0-indexed from the least significant bit).
### Return Value
- Returns $true$ if the $i^{th}$ bit of $n$ is set (i.e., equals 1).
- Returns $false$ otherwise.

`The input and output formats given below are only if you want to test using custom inputs.`

## Constraints
- $1 \leq T \leq 10^5$
- $1 \leq n \leq 3*10^9$
- $0 \leq i \leq 31$
### Input Format
- The first line contains a single integer $T$ — the number of test cases.
- Each test case consists of two lines containing integers: $n$ — the number $i$ — the bit position to check
### Output Format
- For each test case, print $true$ if the $i^{th}$ bit of $n$ is set.
- Otherwise, print $false$.
### Sample 1:
Input
Output

```
1
12
2

```

```
true
```

### Explanation:

Binary representation of 12 is  **1100**. The bit at index 2 (from the right) is  **1**, so it is set.

### Sample 2:
Input
Output

```
1
7
3

```

```
false
```

### Explanation:

Binary representation of 7 is  **0111**. The bit at index 3 is  **0**, so it is not set.

### Sample 3:
Input
Output

```
1
20
4
```

```
true
```

### Explanation:

Binary representation of 20 is  **10100**. The bit at index 4 is  **1**, so it is set.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-25T17:31:14.621Z  

```c_cpp
class Solution {
public:
    bool isBitSet(long long n, int i) {
        // write your code here
        return ((n>>i)&1)==1;
        
    }
};
```

---

[View on CodeChef](https://www.codechef.com/problems/ITHBITSET)