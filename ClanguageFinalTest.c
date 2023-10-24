#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	char arr[] = { 'A','B','C','D','E'};

	for(j=0;j<5;j++)
	{
		for (k = 0; k < 4 - j; k++)
		{
			printf(" ");
		}
		for (i = 0; i <=j; i++)
		{
			printf("%c", arr[i]);
		}
		for ( i = j-1; i >=0; i--)
		{
			printf("%c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}