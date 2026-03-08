#include<reg51.h>
void main()
{
	unsigned int i;
	P1=0x00;
	while(1)
	{
		P1=0x00;
		for(i=0;i<65535;i++);
		P1=0xff;
		for(i=0;i<65535;i++);
	}
}