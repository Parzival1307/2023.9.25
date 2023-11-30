#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int leaf_year(int y)
{
	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
	
}
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
	while (scanf("%d %d", &year, &month) == 2)
	{
		day = days[month];
		if (leaf_year(year)&&month==2)
		{
			day++;
		}
	}
	printf("%d\n", day);
	



	return 0;
}