#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#define N 5
void swap(int *x,int *y)
{
	int temp = *x;
	 *x = *y;
	*y = temp;
}
int main()
{
	int i = 0;

	int arr[N] = { 0 };
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);

	}
	int j = 0;
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	printf("Sorted array in ascending order:\n");

	for (i = 0; i < N; i++)//DescendingSort==>   for(i=N-1;i>=0;i--)
	{
		printf("%d", arr[i]);
		printf("\n");
	}
	return 0;
}