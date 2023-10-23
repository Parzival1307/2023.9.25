#include<stdio.h>
void swap(int *px, int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	
	swap(&a, &b);
	
	printf("%d %d", a, b);
	return 0;
}