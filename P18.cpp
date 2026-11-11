#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    
    char string1[60];
    char string2[60];
    scanf("%s", string1);

    int len;

    strcpy(string2, string1);
    printf("string2=%s\n", string2);

    len = strlen(string2);
    printf("¦r¦êªø«×¬°%d\n", len);

    system("pause");
    return 0;
}
