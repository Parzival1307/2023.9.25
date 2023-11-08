#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int DigitSum(int n,int sum)
{
	if (n != 0)
	{
		sum += n % 10;
		sum=DigitSum(n / 10,sum);//Because return sum in "else" sentence
	}
	else
		return sum;


}
int main()
{
	 unsigned int n = 0;
	int sum = 0;
	printf("Please input a integer:\n");

	scanf("%d", &n);
	
	sum=DigitSum(n,sum);

	printf("The digit sum of the integer you input is %d\n", sum);
	return 0;
}