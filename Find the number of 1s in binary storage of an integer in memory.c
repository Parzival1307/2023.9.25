#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n = 0;
	printf("Please input a integer:\n");

	scanf("%d", &n);
		int i = 0;
		int count = 0;
		int m = 0;
		int t = 1;

		for (i=0;i<32;i++)
		{
			m = t & n;
			if (m != 0)
				count++;
			t = t << 1;
		}
		printf("The answer is %d:\n", count);
	


	

	return 0;
}