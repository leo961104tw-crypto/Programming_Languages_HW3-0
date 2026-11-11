#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void hanoi(int n, char source, char auxiliary, char destination);

int main(void)
{
    int n;

    printf("請輸入盤子的數量: ");
    scanf("%d", &n);

    printf("\n--- 移動步驟如下 ---\n");
   
    hanoi(n, 'A', 'B', 'C');

    system("pause");
    return 0;
}

void hanoi(int n, char source, char auxiliary, char destination)
{
   
    if (n == 1)
    {
        printf("將盤子 1 從 %c 移動到 %c\n", source, destination);
        return;
    }

   
    hanoi(n - 1, source, destination, auxiliary);

    
    printf("將盤子 %d 從 %c 移動到 %c\n", n, source, destination);

   
    hanoi(n - 1, auxiliary, source, destination);
}