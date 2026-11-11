#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int t(int x, int y);

int main(void)
{
    int a, n;
    printf("計算a的n次方:\n");
    printf("請輸入a:");
    scanf("%d", &a);       
    printf("請輸入n:");
    scanf("%d", &n);       

    printf("anwser:%d\n", t(a, n));

    system("pause");       
    return 0;
}

int t(int x, int y)
{
    int i;
    int result = 1;        

    if (y == 0)
    {
        return 1;
    }
 
    for (i = 0; i < y; i++)
    {
        result *= x;
    }

    return result;
}