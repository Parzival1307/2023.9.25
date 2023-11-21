#include <REGX52.H>
#include<INTRINS.H>
void Delay100ms(void)	//@12.000MHz
{
	unsigned char data i, j, k;

	_nop_();
	_nop_();
	i = 5;
	j = 144;
	k = 71;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	P2=0xFE;//LEDP20 turns on
	Delay100ms();
	P2=0xFD;
	Delay100ms();
	P2=0xFB;
	Delay100ms();
	P2=0xF7;
	Delay100ms();
	P2=0xEF;
	Delay100ms();
	P2=0xDF;
	Delay100ms();
	P2=0xBF;
	Delay100ms();
	P2=0x7F;
	Delay100ms();
	
	
}