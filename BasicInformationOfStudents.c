#include<stdio.h>
int main()
{
	int SN = 0;
	int C = 0;
	int M = 0;
	int E = 0;
	printf("Please enter your student number and 3 subjects scores seperated by semicolon:\n");

	if
		(scanf_s("%d;%d,%d,%d", &SN, &C, &M, &E)==4)

	{
		printf("The each score of No.%d are %03d,%03d,%03d\n", SN, C, M, E);
	}
	else
	{
		printf("The input is invalid\n");
	}
	return 0;
}
