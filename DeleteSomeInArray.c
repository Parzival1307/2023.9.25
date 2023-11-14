#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int  check(int aim,int arr[],int sz)
{
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		if (arr[j] == aim)
			return j;//reserve subscript
	}
	return -1;//return after loop is finished.

}

int main()
{
	int N = 0;
	
	printf("Please input a integer:\n");
	scanf("%d", &N);
	
	printf("Then input %d values as sequence:\n", N);

	int* arr = (int*)malloc(N * sizeof(int)); // Dynamically allocate memory for the array
	// Allocate memory for an array of N integers
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return -1;
	}
	int i = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);

	}

	printf("Please input the value you want to delete:\n");
	int aim = 0;
	
	scanf("%d", &aim);


	int k = check(aim,arr,N);
	if (k == -1)
	{
		printf("Value not found in the array.\n");
	}
	else
	{
		for (int i=k; i < N-1; i++)
		{
			arr[i] = arr[i + 1];
		}
		printf("The values after deleting are:\n");

		N--; // Decrease the size of the array
		
		int j = 0;
		for (j = 0; j < N; j++)
		{
			printf("%d ", arr[j]);
		}
	}
	free(arr);
	return 0;
}