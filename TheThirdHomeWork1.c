#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	char mix[100] = { 0 };
	int pure[100] = { 0 };
	int sum = 0;
	scanf("%s", mix);

	for (i = 0; mix[i] !='\0'; i++)
	{
		if (mix[i] >= '0' && mix[i] <= '9')
		{
			pure[j] = mix[i]-'0';
			j++;
		}
	}
	
	int sz = j;

	for (int k = 0; k < sz; k++)
	{
		sum = sum * 10 + pure[k];
	}


	printf("%d", sum);

	return 0;
}