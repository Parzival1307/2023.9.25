#include<stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	printf("Please enter your birthday:\n");

	scanf_s("%4d%2d%2d", &year, &month, &date);//The number above "d" can control field width.

	printf("Your year of birth is %d\n", year);
	printf("Your month of birth is %02d\n", month);//Which means adding with "0" to make data be double figures
	printf("Your date of birth is %02d\n", date);

		return 0;
}