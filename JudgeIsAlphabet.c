#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	char ch = 0;
	int i = 0;

	printf("Please enter a value:\n");
	while (scanf(" %c",&ch)==1)
	{
		if ((ch > 'a' && ch < 'z') || (ch > 'A' && ch < 'Z'))
		{
			printf("%c is a alphabet.\n",ch);
		}
		else
			printf("%c is not a alphabet.\n",ch);

	}


	return 0;
}