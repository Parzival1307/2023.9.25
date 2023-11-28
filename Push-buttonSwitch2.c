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
	while(1)
	{
		if(P3_1==0)
		{
		Delay20ms;
		while(P3_1==0)//It will be stopped at the place , if you not let button go
		Delay20ms;
		P2_0=~P2_0;
		
		}
		
	}
	
	
}