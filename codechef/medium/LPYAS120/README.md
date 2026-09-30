# LPYAS120

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program to generate and print the  **Fibonacci series**  up to the  **$N$th term**  using a for-loop.

The  **Fibonacci series**  is the sequence where each number is the  **sum of the previous two numbers of the sequence** 

The number at the  **nth position**  can be represented by:
 **Fn = Fn-1 + Fn-2** 
where,
 **F0 = 0 and F1 = 1** 

Check the sample input / output below for further clarity.

### Sample 1:
Input
Output

```
10
```

```
0 1 1 2 3 5 8 13 21 34 
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T11:25:01.766Z  

```py
n = int(input())
# Update the code below this line
a=0
b=1
fib_series=[]
for _ in range(n):
    fib_series.append(str(a))
    a,b=b,a+b
print(" ".join(fib_series))    
```

---

[View on CodeChef](https://www.codechef.com/problems/LPYAS120)