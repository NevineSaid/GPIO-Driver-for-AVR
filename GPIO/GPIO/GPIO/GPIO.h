/*
 * GPIO.h
 *
 * Created: 7/25/2018 12:59:36 AM
 *  Author: Nevine
 */ 


#include "DATATYPES.h"
#ifndef GPIO_H_
#define GPIO_H_

#define PORT0 0
#define PORT1 1
#define PORT2 2
#define PORT3 3

#define output 1
#define input 0

void GPIO_voidSetPinDirection(u8 Port, u8 Pin, u8 Direction);
void GPIO_voidSetPinValue(u8 Port, u8 Pin, u8 Value);
u8 GPIO_u8GetPinValue(u8 Port, u8 Pin);
void GPIO_voidSetPullUp(u8 Port, u8 Direction);
#endif /* GPIO_H_ */