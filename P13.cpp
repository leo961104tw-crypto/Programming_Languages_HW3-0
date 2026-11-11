#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double Power(double, int);
void main(void)
{
    int k;    double t, Ans;
    printf("計算t的k次方?\n請輸入t=");
    scanf("%lf", &t);
    printf("計算t的k次方?\n請輸入k=");
    scanf("%d", &k);
    Ans = Power(t, k);
    printf("%f的%d次方=%f\n", t, k, Ans);
    system("pause");
}

double Power(double X, int n)
{
    int i;    double PowerXn = 1;
    for (i = 1;i <= n;i++)
        PowerXn = PowerXn * X;
    return PowerXn;
}