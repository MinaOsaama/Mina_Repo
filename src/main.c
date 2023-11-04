#include "../inc/STD_TYPES.h"
#include "../lib/MDIO_Int.h"
#include <util/delay.h>

#define F_CPU 8000000UL

int main(void)
{

	MDIO_vSetPortDirection(DIO_PORTA, PORT_OUTPUT);
	while(1)
	{
		for (int i=0;i<1;i++)
		{
			for(int j=0;j<8;j++){

				MDIO_vSetPinValue(DIO_PORTA,j,DIO_HIGH);
				_delay_ms(100);
				MDIO_vSetPortValue(DIO_PORTA,FULL_LOW);
				_delay_ms(100);
			}
		}
	}
	return 0;
}

