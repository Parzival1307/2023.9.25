#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool is_prime(int x)
{
	int j = 2;
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}