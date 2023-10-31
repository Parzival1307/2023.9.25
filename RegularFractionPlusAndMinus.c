#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	//Calculate"1/1-1/2+1/3-.....+1/99-1/100"
	int i = 0;
	double term = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		term = (1.0 / i)*flag;
		flag = -flag;
		sum += term;
	}
	printf("The result of '1/1-1/2+1/3-.....+1/99-1/100' is %lf", sum);
	return 0;
}