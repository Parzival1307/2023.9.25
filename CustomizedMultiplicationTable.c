#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//n*n
int main()
{
	int n = 0;
	printf("You can input a number between 1 and 11:\n");
	scanf("%d", &n);
	int i = 0;
	int j = 0;

	printf("The Customized Multiplication Table made for you is:\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d\t", j, i, j * i);
		}
		printf("\n");
	}

	return 0;
}