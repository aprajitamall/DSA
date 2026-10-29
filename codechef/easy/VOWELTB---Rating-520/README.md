# VOWELTB - Rating 520

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Is it a VOWEL or CONSONANT

Write a program to take a character $(C)$ as input and check whether the given character is a vowel or a consonant.

$NOTE:-$ Vowels are 'A', 'E', 'I', 'O', 'U'. Rest all alphabets are called consonants.

### Input Format
- First line will contain the character $C$.
### Output Format

Print "Vowel" if the given character is a vowel, otherwise print "Consonant".

### Constraints
- $C$ $will$ $be$ $an$ $upper$ $case$ $English$ $alphabet$
### Sample 1:
Input
Output

```
Z

```

```
Consonant
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T14:24:24.485Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"Vowel";
    }
    else
    cout<<"Consonant";
}
```

---

[View on CodeChef](https://www.codechef.com/problems/VOWELTB)