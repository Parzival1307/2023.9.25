#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#define N 9
int main()
{
	for (int i = 1; i <= 4; i++)
	{
		for (int l = 0; l <= (i - 1) * 2; l++)
			printf(" ");
		for (int k = 1; k <= (9 - i); k++)
		{
			printf("*");
		}
		for (int j = 1; j <= i; j++)
		{
			
			printf("%d", i);
		}
		printf("\n");

	}




	return 0;
}