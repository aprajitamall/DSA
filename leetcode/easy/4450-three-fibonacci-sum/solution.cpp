class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n%2!=0)
        return false;
        int target=n/2;
        if(target<1)
        {
            return false;
        }
        long long a=0;
        long long b=1;
        while(b<target)
        {
            long long next=a+b;
            a=b;
            b=next;
        }
        return b==target;
    }
};