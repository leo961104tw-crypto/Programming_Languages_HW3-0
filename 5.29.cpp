#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Least Common Multiple is: %d\n", lcm(num1, num2));

    system("pause");
    return 0;
}

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    
    return (a * b) / gcd(a, b);
}