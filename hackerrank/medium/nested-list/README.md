# Nested Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the names and grades for each student in a class of $N$ students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.

**Note:** If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line.

**Example**  
$records = [[\text{"chi"}, 20.0], [\text{"beta"}, 50.0], [\text{"alpha"}, 50.0]]$

The ordered list of scores is $[20.0, 50.0]$, so the second lowest score is $50.0$.  There are two students with that score: $[\text{"beta", "alpha"}]$.  Ordered alphabetically, the names are printed as:
<pre>
alpha
beta
</pre>

**Input Format**

The first line contains an integer, $N$, the number of students. 	
The $2N$ subsequent lines describe each student over $2$ lines.  
- The first line contains a student's name.  
- The second line contains their grade. 


**Constraints**

- $2 \le N \le 5$  
- There will always be one or more students having the second lowest grade. 

**Output Format**

Print the name(s) of any student(s) having the second lowest grade in. If there are multiple students, order their names alphabetically and print each one on a new line.

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T18:54:25.653Z  

```py
if __name__ == '__main__':
    students=[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name,score])

unique_sc=sorted(list(set([student[1] for student in students])))
second_lowest=unique_sc[1] 

result_names=sorted([student[0] for student in students if student[1]==second_lowest])
for name in result_names:
    print(name)       

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/nested-list/problem)