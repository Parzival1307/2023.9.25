#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int  recursion(int n)
{
	if (n!=0)
	{
		return 1 + recursion(n / 10);
	}
	return 0;
}
int main()
{
	int n = 0;

	scanf("%d", &n);

	int d=recursion(n);
	int count = 0;

	for (int i = 0; i < d; i++)
	{
		if (n % 10 == 4)
		count++;
		n = n / 10;
	}
	printf("4 of occurrences are:%d\n", count);

	return 0;
}