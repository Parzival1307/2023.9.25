#include<stdio.h>
//Caculate n!
int main()
{
	int j = 1;
	int i = 1;
	int n	 ;//Initialization

	printf("Please input a number greater than 1 or less than or equal to 10:\n");

	scanf_s("%d", &n);

	if(n>1&&n<=10)
	{
		while (i <= n)
		{
			j = j * i;

			i++;
		}
		printf("The factorial of it is_%d\n", j);
	}
	return 0;
}