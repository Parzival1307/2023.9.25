#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	srand(time(NULL));

	int RandomValue = rand() % 100 + 1;
	//Generate a number between 1 and 100 accroding time change
	printf("You can get a random value between 1 and 100 :%d", RandomValue);

	return 0;
}