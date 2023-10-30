#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//OutputNumbersFromLargeToSmall
void swap(int *x, int *y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%1d%1d%1d", &a, &b, &c);//The number above 'd' means controling fild width
	if (a <= b)
		swap(&a, &b);
	if (b <= c)
		swap(&b, &c);
	if (a <= b)
		swap(&a, &b);
	printf("%d%d%d\n", a, b, c);
	return 0;
}