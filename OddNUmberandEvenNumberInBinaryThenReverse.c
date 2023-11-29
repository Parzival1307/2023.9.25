#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	//00000000 00000000 00000000 00000010
	int num = 0;
	int n = 0;
	scanf("%d", &num);
	int odd[16];
	int even[16];
	int a = 0;
	int b = 0;
	for (int i = 0; i < 32; i+=2)//Start from 0,adding up to 32 digits
	{
		odd[a] = ((num >> i) & 1);
		a++;
	}
	for (int j = 1; j < 32; j += 2)
	{
		even[b] = ((num >> j) & 1);
		b++;
	}
	printf("Odd number in binary:\n");
	for (int k = 15; k >= 0; k--)
	{
		printf("%d ", odd[k]);
	}
	printf("\n");

	printf("Even number in binary:\n");
	for (int l = 15; l >= 0; l--)
	{
		printf("%d ", even[l]);
	}
	return 0;
}