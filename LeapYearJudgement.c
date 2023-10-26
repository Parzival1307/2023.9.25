//LeapYearcondition1,can be divisible by 400.or
//LeapYearcondition2,can be divisible by 4 and can not be divisible by 100
#include<stdio.h>
int is_leap_year(int y)
{
	if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (is_leap_year(i)==1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}