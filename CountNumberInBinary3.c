#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int count = 0;
	int num = 0;
	scanf("%d", &num);
	while (num)
	{
		num = num & (num - 1);
		
		count++;
	}
	printf("%d\n", count);

	return 0;
}