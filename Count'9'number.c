#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	//09,19,29,39,49,59,69,79,89,99
	//90,91,92,93,94,95,96,97,98,99
	int i = 0;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("The '9' numbers counted appear from 0 to 100 are %d", count);

	return 0;
}