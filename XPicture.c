#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	char** ch = (char**)malloc(n * sizeof(char*));
	for (int i = 0; i < n; i++) {
		ch[i] = (char*)malloc(n * sizeof(char));
	}
	int i = 0;
	int j = 0;
	for(i=0;i<n;i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j || i + j == (n-1))
			{
				ch[i][j] = '*';
			}
			else
			{
				ch[i][j] = ' ';
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%c", ch[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}