#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	int commondivisor[100] = { 0 };
	//GreatestCommmonDivisor

	scanf("%d %d", &a, &b);
	for (i = 1; i<=a&&i<=b;i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			commondivisor[count] = i;
			count++;
		}

	}
	int max = 0;
	for (i = 1; i < count; i++)
	{
		if (commondivisor[i] > max)
			max = commondivisor[i];
	}
	printf("%d", max);

	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:6031)
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int i = 0;
//    int count = 0;
//    int commondivisor[100] = { 0 };
//
//    printf("Enter two integers: ");
//    scanf("%d %d", &a, &b);
//
//    for (i = 1; i <= a && i <= b; i++) {
//        if (a % i == 0 && b % i == 0) {
//            commondivisor[count] = i;
//            count++;
//        }
//    }
//
//    int max = 0; // Initialize max to zero
//    for (i = 0; i < count; i++) {
//        if (commondivisor[i] > max)
//            max = commondivisor[i];
//    }
//
//    printf("The greatest common divisor of %d and %d is: %d\n", a, b, max);
//
//    return 0;
//}
