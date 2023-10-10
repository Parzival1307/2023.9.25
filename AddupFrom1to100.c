#include<stdio.h>
int main()
{
	int sum = 0;
	int i;

	for (i = 1; i <= 100; i++)
		//"b=a++" is equivalent to"b=a,then,a=a+1"
		//"b=++a" is equivalent to"a=a+1,then,b=a"
		//Please make a distinction between"SelfIncreaseFirst"and"ValueFirst"
	{
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}//Practice "for" cycle