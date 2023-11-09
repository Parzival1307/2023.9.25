#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void swap(int* x, int* y)
{
	int t;
	t = *x; 
	*x = *y; 
	*y = t;
}
int main()
{
	int arra[] = { 1,2,3,4,5 };
	int arrb[] = { 6,7,8,9,0 };//{"67890"} is of %s
	int sz = sizeof(arra) / sizeof(arra[0]);
	int j = 0;
	int i = 0;

	
	for (j = 0; j < sz; j++)
	{
		 swap(&arra[j], &arrb[j]);
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arra[i]);
	}

	for (j = 0; j < sz; j++)
	{
		printf("%d ", arrb[j]);
	}
	return 0;
}