#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long factorial(long number);

int main(void)
{
    long i, n;
    scanf("%d", &n);
    for (i = 0;i <= n;i++)
    {
        printf("%2d! = %1d\n", i, factorial(i));
    }
    system("pause");
    return 0;
}

long factorial(long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
