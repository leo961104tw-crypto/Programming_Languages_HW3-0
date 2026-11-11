#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char a;
	printf("enter an alphabet: ");
	scanf("%c", &a);
	if ((a >= 65 && a <= 90)||(a >= 97 && a <= 122)) {
		if (a <= 90) {
			a += 32;
				printf("%c",a);
		}
		else {
			a -= 32;
				printf("%c", a);
		}
	}
	else
		system("pause");

}
