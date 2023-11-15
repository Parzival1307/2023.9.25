#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int maximum = a;
	if (b > a)
		maximum = b;
	if (c > a)
		maximum = c;
	printf("The Maximum score is %d\n", maximum);
	return 0;
}