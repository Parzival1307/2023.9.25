#include <REGX52.H>
void Delay10ms(void)	//@12.000MHz
{
	unsigned char data i, j;

	i = 20;
	j = 113;
	do
	{
		while (--j);
	} while (--i);
}

void main()
{
 unsigned char count=0;
	
	while(1)
	{
	if(P3_1==0)
	{
		Delay10ms();
		while(P3_1==0);
		Delay10ms();
		P2=~(0x01<<count);
		count++;
		
	}
		if(count==8)
			count=0;
    
	}

}