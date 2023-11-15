#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int  max(int* arr,int n)
{
	int m = arr[0];

	for (int j = 1; j < n; j++)
	{
		if (arr[j] > m)
		{
			m = arr[j];
		}

	}
	return m;
}
int  min(int* arr, int n)
{
	int m = arr[0];

	for (int j = 1; j < n; j++)
	{
		if (arr[j] < m)
		{
			m = arr[j];
		}

	}
	return m;
}
int main()
{
	int n=0;
	int arr[10000];
	printf("Please enter numbers of values:\n");
	scanf("%d", &n);

	printf("Please enter %d scores from 0 to 100\n", n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);


	}
	int ret1 = max(arr, n);
	int ret2 = min(arr, n);

	int value = ret1 - ret2;
	printf("The max and min of values are:%d and %d\n", ret1, ret2);

	printf("The value that Max minus Min is %d\n", value);

	return 0;
}