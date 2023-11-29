#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	for (int i = 0; i < 32; i++)
	{
		if (((num>>i) & 1) == 1)
			count++;
	}
	printf("%d", count);

	return 0;
}