#include<stdio.h>
int main()
{
	//set a initial value
	int x = 0;
	int y = 0;

	//input
	scanf_s("%d", &x);

	//judge
	if (x < 0)//the conditions are in brackets
		y = 1;//the results are in next line
	else if(x == 0)//word "else" and word "if" should be separated 
		y = 0;
	else 
		y = -1;
	//output
	printf("%d\n",y);//output should not to be added a "&"


	return 0;
}