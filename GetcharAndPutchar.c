#include<stdio.h>
int main()
{
	printf("Please enter a letter:\n");
	
	int ch = getchar();
	
	printf("%c\n", ch);
	putchar(ch);

	return 0;
}