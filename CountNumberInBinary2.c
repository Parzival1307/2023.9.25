#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int countnumberinbinary(unsigned int num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
		
	}
	return count;//You should return count after while loop is completed
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int n = countnumberinbinary(num);
	printf("%d\n", n);
}