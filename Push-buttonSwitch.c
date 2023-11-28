#include <REGX52.H>
void Delay20ms(void)	//@12.000MHz
{
	unsigned char data i, j;

	i = 39;
	j = 230;
	do
	{
		while (--j);
	} while (--i);
}

void main()
{
	if(P3_1==0)//if P31 is pushed
	{
		Delay20ms;
		P2_0=0;//P20 lights up
		
	}
	else
	{
		Delay20ms;
		P2_0=1;
	}
}