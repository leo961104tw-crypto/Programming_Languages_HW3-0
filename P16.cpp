#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%.2f ", sqrt(x));
    printf("\n");
    system("pause");
    return 0;
}