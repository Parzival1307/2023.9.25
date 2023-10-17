#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	
	printf("Please enter  10 numbers from 032 to 127:\n");
	
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf(".\n");
	printf("You entered the following numbers:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
		printf(" ");

	}
	printf("Your input's corresponding letters in ASCII are:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%c", arr[i]);
		printf(" ");

	}
	return 0;
}