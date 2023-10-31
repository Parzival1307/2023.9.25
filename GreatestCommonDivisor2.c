#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("Please input 2 numbers:\n");
	scanf("%d %d", &a, &b);
	int A = a;
	int B = b;

	while (c = a % b)
	{
		a = b;
		b = c;

	
	}
	printf("The GreatestCommonDivisor of%d and %d is %d\n", A, B, b);
	return 0;
}