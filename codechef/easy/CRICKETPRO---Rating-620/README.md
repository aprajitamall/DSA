# CRICKETPRO - Rating 620

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Cricket tournament profits

The Chef is organising a cricket tournament with  **Y teams**. Each team pays an  **entry fee of Rs. 200**  to participate.

To host the tournament, the Chef has to pay  **Rs. 5000**  to rent the ground for the day.

Your task is to calculate the  **profit**  made by the Chef.

- If the Chef makes a profit, output the profit amount.
- If the Chef makes a loss, output -1 instead.
## Function Declaration
### Function Name

$tournamentProfit$ – This function calculates the profit earned by the Chef from the tournament.

## Parameters
- $Y$ : The number of teams participating in the tournament.
## Return Value
- Returns an integer representing the profit made by the Chef.
- Returns $-1$ if the Chef makes a loss.
## Constraints
- $1 \leq Y \leq 1000$
### Input Format
- A single integer $Y$ — the number of teams.
### Output Format
- The profit made by the Chef.
- Print -1 if the profit is less than 0.
### Sample 1:
Input
Output

```
25
```

```
0
```

### Explanation:
- As the 25*200 = 5000 and the Chef spend 5000 so the profit is 0.
### Sample 2:
Input
Output

```
100
```

```
15000
```

### Sample 3:
Input
Output

```
10
```

```
-1
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-31T14:50:44.448Z  

```c_cpp
int tournamentProfit(int Y) {
    // write your code here 
    if(Y*200>=5000)
    return Y*200-5000;
    else
    return -1;
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CRICKETPRO)