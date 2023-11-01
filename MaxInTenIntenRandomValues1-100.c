#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<time.h>
#include <stdlib.h> 
#include <windows.h>   

int main()
{
	int i = 0;
	int RandomNumber[10];
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++)
	{
		
		RandomNumber[i] = rand()%100+1;
		Sleep(2);
		printf("%d", RandomNumber[i]);
		printf(" ");
	}
	int max = RandomNumber[0];
	for (i = 1; i < 10; i++)
	{
		if (RandomNumber[i] >= max)
			max = RandomNumber[i];

	}
	printf("\nThe maxium value of all values is %d", max);
	return 0;
}