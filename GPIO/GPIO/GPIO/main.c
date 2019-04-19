/*
 * main.c
 *
 * Created: 8/2/2018 11:38:40 PM
 *  Author: Nevine
 */ 
#include "BITMANIPULATION.h"
#include "DATATYPES.h"
#include "Registers.h"
#include "GPIO.h"
#define F_CPU 1000000UL
#include <util/delay.h>

int main(){
	GPIO_voidSetPinDirection(PORT2,2,input);
	GPIO_voidSetPinDirection(PORT1,0,output);
	while (1)
	{	
		
		if(GPIO_u8GetPinValue(PORT2,2)){
			GPIO_voidSetPinValue(PORT1,0,1);
		}
		else
		GPIO_voidSetPinValue(PORT1,0,0);
	}
}