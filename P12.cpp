#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int square(int y);

int main(void)
{
    int x,t;
    scanf("%d", &t);
    for (x = 1;x <= t;x++)
    {
        printf("%d ", square(x));
    }
    printf("\n");
    system("pause");
    return 0;
}

int square(int y)
{
    return y * y;
}