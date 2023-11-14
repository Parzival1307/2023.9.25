#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int fib(int n)
{
	if (n == 2 || n == 1)
	{
		return n;
	}
	else
	{
		return fib(n - 2) + fib(n - 1);//f(10)=f(9)+f(8)
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum =fib(n);
	printf("%d\n", sum);
	return 0;
}
