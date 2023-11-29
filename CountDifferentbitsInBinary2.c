#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int CountDifferentbitsInBinary(int x, int y)
{
	int xy = x ^ y;
	//Then,count 1 digits of xy in binary
	int count = 0; 
	while (xy)
	{
		xy=xy& (xy - 1);
		count++;
	}
}
int main()
{
	//0^1=1      0^0=0  In Binary
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int ret =CountDifferentbitsInBinary(num1, num2);
	printf("%d\n", ret);

	return 0;
}