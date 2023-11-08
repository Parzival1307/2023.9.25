#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int powerf(int n, int k)
{
	if(k>=1)
	return n* powerf(n, (k - 1));
	//The impotent things you shoud noticed are the value of return and if condition and relation of fomer and latter
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	
	int result = powerf(n, k);

	printf("%d", result);
	return 0;

}