#include<stdio.h>
int main()
{
	printf("Please input four digits:\n");

	int a = 0 ,b = 0;

	scanf_s("%d", &a);
	
	b += (a / 10 / 10 / 10 % 10);
	b += (a / 10 / 10 % 10) * 10;
	b += (a / 10 % 10) * 10 * 10;
	b += (a % 10) * 10 * 10 * 10;
	//"b+=a"means"b=b+a"
	//"%10"means getting a mostright number
	//Because change sequence on the basis of original four digits,the original numbers should be retained. So int a£¬b
	printf("The inversion of input is:%d\n", b);
	
	return 0;
}