#include<stdio.h>
int main()
{
	int sum = 0;
	int i;
	for (i = 1; i <= 100; i = i+2)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}