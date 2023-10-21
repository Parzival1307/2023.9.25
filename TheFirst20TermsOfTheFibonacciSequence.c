#include<stdio.h>
//1,1,2,3,5,8,13,21
//printf The Fibonacci
int main()
{
	int sum = 0;
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;

	do {
		printf("%d\n", a);
		c = a + b;
		a = b;
		b = c;
		i++;
	} while (i < 20);
		
	
	return 0;
}