#include "../inc/STD_TYPES.h"
#include "../inc/BIT_MATH.h"
#include "MDIO_Int.h"
#include "MDIO_Prv.h"
error_t MDIO_vSetPinDirection  (u8 A_u8PortNo , u8 A_u8PinNo , u8 A_u8Direction)
{
	error_t Status = OK;

	if (A_u8Direction == OUTPUT)
	{
		switch (A_u8PortNo)
		{
		case DIO_PORTA :
			SET_BIT(DDRA , A_u8PinNo);
			break;
		case DIO_PORTB :
			SET_BIT(DDRB , A_u8PinNo);
			break;
		case DIO_PORTC :
			SET_BIT(DDRC , A_u8PinNo);
			break;
		case DIO_PORTD :
			SET_BIT(DDRD , A_u8PinNo);
			break;
		default:
			Status = NOK;
			break;
		}

	}
	else if (A_u8Direction == INPUT)
	{
		switch (A_u8PortNo)
		{
		case DIO_PORTA :
			CLR_BIT(DDRA , A_u8PinNo);
			break;
		case DIO_PORTB :
			CLR_BIT(DDRB , A_u8PinNo);
			break;
		case DIO_PORTC :
			CLR_BIT(DDRC , A_u8PinNo);
			break;
		case DIO_PORTD :
			CLR_BIT(DDRD , A_u8PinNo);
			break;
		default:
			Status = NOK;
			break;
		}
	}
	else
	{
		Status = NOK;
	}
	return Status;
}


error_t MDIO_vSetPinValue      (u8 A_u8PortNo , u8 A_u8PinNo , u8 A_u8Value)
{
	error_t Status = OK;

	if( A_u8Value == DIO_HIGH)
	{
		switch (A_u8PortNo)
		{
		case DIO_PORTA :
			SET_BIT(PORTA , A_u8PinNo);
			break;
		case DIO_PORTB :
			SET_BIT(PORTB , A_u8PinNo);
			break;
		case DIO_PORTC :
			SET_BIT(PORTC , A_u8PinNo);
			break;
		case DIO_PORTD :
			SET_BIT(PORTD , A_u8PinNo);
			break;
		default :
			Status = NOK;
			break;
		}

	}
	else if( A_u8Value == DIO_LOW )
	{
		switch (A_u8PortNo)
		{
		case DIO_PORTA :
			CLR_BIT(PORTA , A_u8PinNo);
			break;
		case DIO_PORTB :
			CLR_BIT(PORTB , A_u8PinNo);
			break;
		case DIO_PORTC :
			CLR_BIT(PORTC , A_u8PinNo);
			break;
		case DIO_PORTD :
			CLR_BIT(PORTD , A_u8PinNo);
			break;
		default :
			Status = NOK;
			break;
		}
	}
	return	Status ;
}

u8 MDIO_u8GetPinValue       (u8 A_u8PortNo , u8 A_u8PinNo )
{
	u8 L_u8PinVal = 0;

	switch(A_u8PortNo)
	{
	case DIO_PORTA :
		L_u8PinVal = GET_BIT(PINA , A_u8PinNo);
		break;
	case DIO_PORTB :
		L_u8PinVal = GET_BIT(PINB , A_u8PinNo);
		break;
	case DIO_PORTC :
		L_u8PinVal = GET_BIT(PINC , A_u8PinNo);
		break;
	case DIO_PORTD :
		L_u8PinVal = GET_BIT(PIND , A_u8PinNo);
		break;
	}
	return L_u8PinVal;
}

void MDIO_vSetPortDirection (u8 A_u8PortNo , u8 A_u8Direction)
{
	switch(A_u8PortNo)
	{
	case DIO_PORTA :
		DDRA = A_u8Direction;
		break;
	case DIO_PORTB :
		DDRB = A_u8Direction;
		break;
	case DIO_PORTC :
		DDRC = A_u8Direction;
		break;
	case DIO_PORTD :
		DDRD = A_u8Direction;
		break;
	default :
		break;
	}
}

void MDIO_vSetPortValue     (u8 A_u8PortNo , u8 A_u8Value)
{
	switch(A_u8PortNo)
		{
		case DIO_PORTA :
			PORTA = A_u8Value;
			break;
		case DIO_PORTB :
			PORTB = A_u8Value;
			break;
		case DIO_PORTC :
			PORTC = A_u8Value;
			break;
		case DIO_PORTD :
			PORTD = A_u8Value;
			break;
		default :
			break;
		}
}

u8 MDIO_u8GetPortValue      (u8 A_u8PortNumber )
{
return 0;
}
