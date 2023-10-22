#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

again:
	printf("Please enter 'I am a pig'to cancel this shutdown\n");
	gets(input);
	if (strcmp(input, "I am a pig") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;

	}
	return 0;
}