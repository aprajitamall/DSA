# EZSPK - Rating 708

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Easy Speaking

Chef believes that a word is  *hard to pronounce*  if it contains a sequence of  **at least $4$**  contiguous characters that are all consonants.
Here, a consonant is every letter from `a` to `z`, except for the five letters `{a, e, i, o, u}`.

For example, the words $\texttt{"syzygy"}, \texttt{"locksmith"},$ and $\texttt{"worldview"}$ are  *hard to pronounce*, because:

- $\texttt{"syzygy"}$ has length $6$ and is made up of entirely consonants.
- $\texttt{"locksmith"}$ has the contiguous sequence $\texttt{"cksm"}$ within it, which is all consonants.
- $\texttt{"worldview"}$ has the contiguous sequence $\texttt{"rldv"}$ within it, which is all consonants.

On the other hand, the words $\texttt{"cry"}, \texttt{"scream"},$ and $\texttt{"aqueous"}$ are not  *hard to pronounce*.

You are given a word in the form of a string $S$ containing $N$ English letters.
Is this word  *hard to pronounce* ?

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, the length of the word. The second line contains the string $S$ of length $N$.
### Output Format

For each test case, output on a new line the answer: `Yes` if the word is  *hard to pronounce*, and `No` otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e. the strings `NO`, `No`, `nO`, and `no` will all be considered equivalent.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100$
- $S$ has length $N$.
- Each character of $S$ is one of $\{a, b, c, \ldots, z\}$.
### Sample 1:
Input
Output

```
6
6
syzygy
3
cry
9
locksmith
6
scream
7
aqueous
9
worldview

```

```
Yes
No
Yes
No
No
Yes
```

### Explanation:

 **Test case $1$:**  As explained in the statement, $\texttt{syzygy}$ contains $6$ consonants in a row, and so is hard to pronounce. The answer is `Yes`.

 **Test case $2$:**  The word $\texttt{cry}$ has length $3$, and so certainly does not contain $4$ consonants in a row (even though it contains only consonants). Thus, it is not hard to pronounce, and the answer is `No`.

 **Test case $3$:**  The word $\texttt{locksmith}$ contains $4$ consonants in a row, namely $\texttt{cksm}$, and so is hard to pronounce. The answer is `Yes`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T12:58:51.233Z  

```c_cpp

#include <bits/stdc++.h>
using namespace std;
bool isvowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int flag=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(!isvowel(s[i]))
        {
          count++;
          if(count>=4)
          {
             flag=1;
             break;
          }
        }
        else count=0;
    }
    if(flag==1)
    cout<<"yes\n";
    else
    cout<<"no\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/EZSPK)