#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<windows.h>
int main()
{
	
	//I assume N is 100
	srand((unsigned int)time(NULL));

	int arr[100] = { 0 };
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 100;
		Sleep(100);
		printf("%02d ", arr[i]);
		if (arr[i] % 5 == 0 && arr[i] % 9 == 0)
			count++;
	}
	printf("\nThe count is %d", count);
	
	return 0;
}