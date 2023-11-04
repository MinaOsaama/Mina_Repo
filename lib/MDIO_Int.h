#ifndef MCAL_DIO_MDIO_INT_H_
#define MCAL_DIO_MDIO_INT_H_

typedef enum
{
	DIO_PORTA,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}Ports_t;


typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6
}PINS_t;

typedef enum
{
	NOK,
	OK
}error_t;


#define DIO_LOW    0
#define DIO_HIGH   1


#define OUTPUT 1
#define INPUT  0

#define FULL_LOW   0x00
#define FULL_HIGH  0xff

#define PORT_OUTPUT 0xff
#define PORT_INPUT  0x00

error_t MDIO_vSetPinDirection  (u8 A_u8PortNo , u8 A_u8PinNo , u8 A_u8Direction);

error_t MDIO_vSetPinValue      (u8 A_u8PortNo , u8 A_u8PinNo , u8 A_u8Value);

u8 MDIO_u8GetPinValue       (u8 A_u8PortNo , u8 A_u8PinNo );

void MDIO_vSetPortDirection (u8 A_u8PortNo , u8 A_u8Direction);

void MDIO_vSetPortValue     (u8 A_u8PortNo , u8 A_u8Value);

u8 MDIO_u8GetPortValue      (u8 A_u8PortNo );

#endif /* MCAL_DIO_MDIO_INT_H_ */
