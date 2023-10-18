#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int k = 0;

	printf("Please enter a number from 1 to 10;:\n");
	scanf_s("%d", &k);//"k" is the number you want to find out

	
	while (left<=right)
	{
		int mid = (right + left) / 2;//The int mid should be put in "while" loop to be updated the mid data
		if (arr[mid] > k)
		{
			right = mid - 1;//The measure"-1" is because there is a inequation in if statement
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("Your finding number is %d\n", arr[mid]);
			break;
		}
		
	}
	
	
		
	return 0;
}