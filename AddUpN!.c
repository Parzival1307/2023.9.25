#include<stdio.h>
int main()

{
	int n = 0;
	int s = 1;
	int i = 0;
	int u = 0;
	scanf_s("%d", &n);

	
	for (i = 1; i <= n; i++)
	{
		
		s = s * i;
		u+=s;
	}
	printf("%d\n", u);

	return 0;
}