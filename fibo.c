#include <stdio.h>
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    printf("enter the number to find fibonnacci");
    scanf("%d", &n);
    printf("fibonnacci of %d! = %d", n, fibo(n));

    return 0;
}