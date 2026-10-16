# Game of Two Stacks

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Alexa has two stacks of non-negative integers, stack $a[n]$ and stack $b[m]$ where index $0$ denotes the top of the stack. Alexa challenges Nick to play the following game:

* In each move, Nick can remove one integer from the top of either stack $a$ or stack $b$.
* Nick keeps a running sum of the integers he removes from the two stacks.
* Nick is disqualified from the game if, at any point, his running sum becomes greater than some integer $maxSum$ given at the beginning of the game.
- Nick's *final score* is the total number of integers he has removed from the two stacks.

Given $a$, $b$, and $maxSum$ for $g$ games, find the maximum possible score Nick can achieve.

**Example**   
$a = [1, 2, 3, 4, 5]$   
$b = [6, 7, 8, 9]$   

The maximum number of values Nick can remove is $4$.  There are two sets of choices with this result.  

1. Remove $1, 2, 3, 4$ from $a$ with a sum of $10$.   
2. Remove $1, 2, 3$ from $a$ and $6$ from $b$ with a sum of $12$.   

**Function Description**   
Complete the *twoStacks* function in the editor below.  

*twoStacks* has the following parameters:
- *int maxSum:* the maximum allowed sum   
- *int a[n]:* the first stack   
- *int b[m]:* the second stack   

**Returns**   
- *int:* the maximum number of selections Nick can make   


**Input Format**

The first line contains an integer, $g$ (the number of games). The $3 \cdot g$ subsequent lines describe each game in the following format:

1. The first line contains three space-separated integers describing the respective values of $n$ (the number of integers in stack $a$), $m$ (the number of integers in stack $b$), and $maxSum$ (the number that the sum of the integers removed from the two stacks cannot exceed).
2. The second line contains $n$ space-separated integers, the respective values of $a[i]$.
3. The third line contains $m$ space-separated integers, the respective values of $b[i]$.

**Constraints**

* $1 \le g \le 50$
* $1 \le n, m \le 10^5$
* $0 \le a[i], b[i] \le 10^6$
* $1 \le maxSum \le 10^9$
 
**Subtasks**

* $1 \le n,m,\le 100$ for $50\%$ of the maximum score.

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T14:53:51.395Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'twoStacks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER maxSum
 *  2. INTEGER_ARRAY a
 *  3. INTEGER_ARRAY b
 */

int twoStacks(int maxSum, vector<int> a, vector<int> b) {
int i=0,j=0;
long long curr_sum=0;
int max_sc=0;
while(i<a.size()&&curr_sum+a[i]<=maxSum)
{
    curr_sum+=a[i];
    i++;
}
max_sc=i;
while(j<b.size()){
    curr_sum+=b[j];
    j++;
    while(curr_sum>maxSum&&i>0)
    {
        i--;
        curr_sum-=a[i];
    }
    if(curr_sum<=maxSum)
    {
        max_sc=max(max_sc,i+j);
    }
}
return max_sc;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int maxSum = stoi(first_multiple_input[2]);

        string a_temp_temp;
        getline(cin, a_temp_temp);

        vector<string> a_temp = split(rtrim(a_temp_temp));

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int a_item = stoi(a_temp[i]);

            a[i] = a_item;
        }

        string b_temp_temp;
        getline(cin, b_temp_temp);

        vector<string> b_temp = split(rtrim(b_temp_temp));

        vector<int> b(m);

        for (int i = 0; i < m; i++) {
            int b_item = stoi(b_temp[i]);

            b[i] = b_item;
        }

        int result = twoStacks(maxSum, a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/game-of-two-stacks/problem)