# CHEFHOTEL - Rating 420

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Chef visits hotel

Chef is visiting a hotel for a relaxing vacation.

The hotel charges $R$ rupees per night. Chef plans to stay for $N$ nights. During his stay, Chef also uses some extra services such as food delivery and laundry, which cost $E$ rupees in total.

Your task is to calculate the total amount Chef has to pay before checking out of the hotel.

## Function Declaration
### Function Name

$calculateHotelBill$ – This function calculates the  **total amount Chef has to pay**  for his hotel stay.

### Parameters
- $N$ : An integer representing the number of nights Chef stays in the hotel.
- $R$ : An integer representing the room charge per night.
- $E$ : An integer representing the extra service charges.
### Return Value
- Returns an integer representing the total hotel bill.
## Constraints
- $1 \le N \le 100$
- $1 \le R \le 10^4$
- $0 \le E \le 10^5$
### Input Format

A single line contains three space-separated integers:

- $N$ — the number of nights Chef stays.
- $R$ — the room charge per night.
- $E$ — the extra service charges.
### Output Format

Print a single integer representing the total amount Chef has to pay.

### Sample 1:
Input
Output

```
3 2000 500
```

```
6500
```

### Explanation:

Chef stays for `3` nights and pays `2000` rupees per night.

Room charges = `3 × 2000 = 6000`

Extra charges = `500`

Total bill = `6000 + 500 = 6500`

### Sample 2:
Input
Output

```
5 1500 0
```

```
7500
```

### Explanation:

Room charges = `5 × 1500 = 7500`

Extra charges = `0`

Total bill = `7500 + 0 = 7500`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-23T14:59:40.445Z  

```c_cpp
int calculateHotelBill(int N, int R, int E) {
    // write your code here 
    return R*N+E;
    
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CHEFHOTEL)