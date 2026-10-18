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
