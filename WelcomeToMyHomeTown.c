#include<stdio.h>
#include <windows.h>
#include<stdlib.h>
int main()
{
	int n = 0;//#number
	char ch1[] = { "Welcome to my hometown!" };
	char ch2[] = { "#######################" };
	int left = 0;
	int right = strlen(ch2) - 1;
	while (left <= right)
	{
		ch2[left] = ch1[left];//replace
		ch2[right] = ch1[right];
		right--;
		left++;
		printf("%s\n", ch2);
		Sleep(500);
		system("cls");

	}
	printf("Welcome to my hometown!");
	return 0;
}