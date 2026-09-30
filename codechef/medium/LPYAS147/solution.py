# cook your dish here
import sys
def main():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t=int(input_data[0])
    for i in range(1,t+1):
        n=int(input_data[i])
        print(n+1)
if __name__=='__main__': 
    main()