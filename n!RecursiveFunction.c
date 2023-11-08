#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int rf(int n)
{
	if (n == 1)
	{
		//Findout condition of stopping
		return 1;
	}
	else
	{
		return n*rf(n - 1);//5,4,3,2,1
		//Find out relation of n and (n-1)
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = rf(n);
	printf("%d", ret);


	return 0;
}