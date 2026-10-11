class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n%2!=0)
        {
            return false;
        }
        long long t=n/2;
        long long a=0;
        long long b=1;
        while(a<t)
        {
            long long c=a+b;
            a=b;
            b=c;
        }
        return a==t;
    }
};