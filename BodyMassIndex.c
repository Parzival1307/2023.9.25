#include<stdio.h>

int main()
{
	float Height = 0;
	int Weight = 0;


	printf("Please input your height(m) and weight(kg):\n");

	scanf("%f %d", &Height, &Weight);
	
	int SH = Height * Height;

	int BMI = Weight / SH;

	if (BMI < 18)
	{
		printf("You weight is less");

	}
	else if(BMI < 25)
	{
		printf("Your weight is normal");

	}
	else if(BMI < 28)
	{
		printf("You are overweight");
	}
	else
	{
		printf("You are obese");
	}

	return 0;
}