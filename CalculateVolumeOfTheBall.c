#include<stdio.h>
int main()
{
	float v = 0.0f;
	float r = 0.0f;

	printf("Please enter radius of the ball:\n");
	scanf_s("%f", &r);

	 v = (4 / 3.0*3.1415926 * r * r * r);

	 printf("The volume of the ball is %.3f\n", v);

	return 0;
}