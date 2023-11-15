#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	char n;
	printf("Please enter a letter:\n");

	while(1)
	{
		scanf("%c", &n);

		if (n > 'a' && n < 'z')
		{
			n -= 32;
			break;
		}
		else if (n > 'A' && n < 'Z')
		{
			n += 32;
			break;
		}
		else
			printf("Your input is invalid,please enter again!!\n");
		while (getchar() != '\n'); // Clear input buffer
		

	}
	printf("The transfered value is %c\n", n);

	return 0;
}