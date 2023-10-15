#include<stdio.h>
int main()
{
	char ch;
	printf("Please input a letter:\n");

	scanf(" %c", &ch);
	if (ch>='a'&&ch<='z')//You can't enclose conditions in double quotes.
	{
		ch -= 32;
		printf("The big letter is %c\n", ch);
	}
	else if (ch>='A'&&ch<='Z')
	{
		ch += 32;
		printf("The small letter is %c\n", ch);
	}
	else
	{
		printf("Invalid input,the input is not a letter.");
	}
	return 0;
}