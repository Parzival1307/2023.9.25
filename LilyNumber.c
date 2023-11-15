#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int main()
//{
//	int number = 0;
//	//seperate
//	for (number = 10000; number < 100000; number++)
//	{
//		int i = 0;
//		int j = 0;
//		int divisor = 1;
//		int sum = 0;
//
//		for (j = 0; j < 5; j++)
//		{
//			for (i = 0; i < j; i++)
//			{
//				divisor *= 10;
//			}
//			sum += ((number / divisor) * (number % divisor));
//
//		}
//		if (sum == number)
//			printf("%d ", number);
//	}
//
//	return 0;
//}
#include<math.h>
int main()
{
	int number = 0;
	//seperate
	for (number = 10000; number < 100000; number++)
	{
		int i = 0;
		int j = 0;
		int divisor = 1;
		int sum = 0;

		for (j = 0; j < 5; j++)
		{
			divisor = (int)pow(10, j);
			sum += ((number / divisor) * (number % divisor));

		}
		if (sum == number)
			printf("%d ", number);
	}

	return 0;
}