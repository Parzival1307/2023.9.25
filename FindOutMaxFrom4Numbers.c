#include<stdio.h>
int main()
{
	printf("Please enter 4 numbers seperated by blanks:\n");

	int i = 0;
	int arr[4] = { 0 };
	//First,put numbers into array by loops
	while (i < 4)
	{
		scanf_s("%d", &arr[i]);//remember adding "&"
		i++;
	}

	int max = arr[0];
	int j = 1;
	//Then ,compare number
	while (j < 4)
	{
		if (arr[j] > max)
		{
			 max = arr[j];//Not int!

		}
	
		j++;
	}
	printf("The Maximum is %d", max);

	return 0;
}