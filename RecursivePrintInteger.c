#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void printeverynumber(int integer)
{
	if (integer != 0)//158//15//1
	{
		printeverynumber(integer / 10);//15//1//0
		printf("%d", integer % 10);//print 1%10,15%10,158%10
	}
}


int main()
{
	int integer = 0;
	int n = 0;
	int count = 1;
	printf("Please input a integer:\n");
	scanf("%d", &integer);
	
	printeverynumber(integer);


	return 0;
}