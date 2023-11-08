#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int SimulateStrlen(char* str)
{
	int count = 0;
	if (*str != '\0')
	{
		return 1 + SimulateStrlen(str+1);
	}
	else
		return count;
}
int main()
{
	char arr[] = { 'a','b','c','\0'};//abc\
	
	int ret = SimulateStrlen(arr);
	printf("%d", ret);

	return 0;
}