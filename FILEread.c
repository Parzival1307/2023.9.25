#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 5
int main()
{
	int i = 0;
	int arr[5] = { 0 };
	FILE* fp;
	fp=fopen("A.txt", "r");
	for (i = 0; i < N; i++)
	{
		fscanf("%d", &arr[i]);

	}
	for (i = 0; i < N; i++)
	{
		fprintf("%d", arr[i]);
	}
	return 0;
}