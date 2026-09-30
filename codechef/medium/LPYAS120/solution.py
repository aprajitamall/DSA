n = int(input())
# Update the code below this line
a=0
b=1
fib_series=[]
for _ in range(n):
    fib_series.append(str(a))
    a,b=b,a+b
print(" ".join(fib_series))    