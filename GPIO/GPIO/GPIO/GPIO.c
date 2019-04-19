/*
 * GPIO.c
 *
 * Created: 7/22/2018 10:59:03 PM
 * Author : Nevine
 */ 

#include <avr/io.h>
#include "GPIO.h"
#include "BITMANIPULATION.h"

void GPIO_voidSetPinDirection(u8 Port, u8 Pin, u8 Direction)
{
	switch(Port){
		case PORT0:
		if(Direction == output){
			SETBIT(DDRA,Pin);
			}
		else{
			CLRBIT(DDRA,Pin);
			}
		break;
		case PORT1:
		if(Direction == output){
			SETBIT(DDRB,Pin);
		}
		else{
			CLRBIT(DDRB,Pin);
		}
		break;
		case PORT2:
		if(Direction == output){
			SETBIT(DDRC,Pin);
		}
		else{
			CLRBIT(DDRC,Pin);
		}
		break;
		case PORT3:
		if(Direction == output){
			SETBIT(DDRD,Pin);
		}
		else{
			CLRBIT(DDRD,Pin);
		}
		break;
		default:
		
		break;
	}
}

void GPIO_voidSetPinValue(u8 Port, u8 Pin, u8 Value){
	switch(Port){
		case PORT0:
		if(Value == 1){
			SETBIT(PORTA,Pin);
		}
		else{
			CLRBIT(PORTA,Pin);
		}
		break;
		case PORT1:
		if(Value == 1){
			SETBIT(PORTB,Pin);
		}
		else{
			CLRBIT(PORTB,Pin);
		}
		break;
		case PORT2:
		if(Value == 1){
			SETBIT(PORTC,Pin);
		}
		else{
			CLRBIT(PORTC,Pin);
		}
		break;
		case PORT3:
		if(Value == 1){
			SETBIT(PORTD,Pin);
		}
		else{
			CLRBIT(PORTD,Pin);
		}
		break;
		default:
		
		break;
	}
}
u8 GPIO_u8GetPinValue(u8 Port, u8 Pin){
	u8 ret;
	switch(Port){
		case PORT0:
		ret = GETBIT(PORTA, Pin);
		break;
		case PORT1:
		ret =  GETBIT(PORTB, Pin);
		break;
		case PORT2:
		ret = GETBIT(PORTC, Pin);
		break;
		case PORT3:
		ret = GETBIT(PORTD, Pin);
		break;
		default:
		
		break;
	}
	return ret;
}

void GPIO_voidSetPullUp(u8 Port, u8 Direction){
	switch(Port){
		case PORT0:
		if(Direction == input){
			DDRA = 0x00;
		}
		else{
			DDRA = 0xff;			
		}
		break;
		case PORT1:
		if(Direction == input){
			DDRB = 0x00;
		}
		else{
			DDRB = 0xff;
		}
		break;
		case PORT2:
		if(Direction == input){
			DDRC = 0x00;
		}
		else{
			DDRC = 0xff;
		}
		break;
		case PORT3:
		if(Direction == input){
			DDRD = 0x00;
		}
		else{
			DDRD = 0xff;
		} 
		break;
		default:
		
		break;
	}
}

   