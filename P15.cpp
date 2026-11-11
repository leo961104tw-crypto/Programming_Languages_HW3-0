#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n);

int main(void)
{
    int a[3];

    printf("Enter three integers: ");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    // 使用泡沫排序法將陣列排序
    bubbleSort(a, 3);

    printf("排序後（由小到大）：%d %d %d\n", a[0], a[1], a[2]);
    printf("Maximum is: %d\n", a[2]); // 排序後最大的會落在最後一個位置 (a[2])

    system("pause");
    return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // 如果前一個大於後則交換（由小到大排序）
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}