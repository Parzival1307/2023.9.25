#include <REGX52.H>

void Delay1ms(unsigned int xms)	//@12.000MHz
{
	unsigned char data i, j;
while(xms)
{//��ִ��1ms�����Ʋ�����ѭ��x ms�Σ�����x ms�룬ִ��������
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	xms--;
}
}

void main()
{
		int t = 500;
	
	P2=0xFE;//LEDP20 turns on

Delay1ms(t);
P2=0xFD;
Delay1ms(t);
P2=0xFB;
Delay1ms(t);
P2=0xF7;
Delay1ms(t);
P2=0xEF;
Delay1ms(t);
P2=0xDF;
Delay1ms(t);
P2=0xBF;
Delay1ms(t);
P2=0x7F;
Delay1ms(t);
	
	
	
}