//509.Fibonacci Number
//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
//such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
//F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).
int fib(int n) {
    int i, f1, f2, f3;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    f1 = 0;
    f2 = 1;

    for(i = 2; i <= n; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }

    return f3;
}

